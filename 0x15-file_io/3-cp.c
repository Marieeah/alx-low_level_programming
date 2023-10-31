#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);
/**
* create_buffer - Allocates a buffer of size 1024 bytes.
* @file: The name of the file for which the bufer is allocated.
*
* Return: A pointer to the newly allocated buffer.
*/
char *create_buffer(char *file)
{
char *buffer;

buffer = malloc(sizeof(char) * 1024);

if (buffer == NULL)
{
dprintf(STDERR_FILENO,
"Error: Unable to allocate buffer for %s\n", file);
exit(99);
}

return (buffer);
}


/**
* close_file - Closes a file descriptor.
* @fd: The file descriptor to be closed.
*/
void close_file(int fd)
{
int result;

result = close(fd);

if (result == -1)
{
dprintf(STDERR_FILENO, "Error: Unable to close fd %d\n", fd);
exit(100);
}
}

/**
* main - Copies the contents from one file to another.
* @argc: The number of arguments provided.
* @argv: An array of pointers to the arguments.
*
* Return: 0 on success.
*
* Description: Exit codes:
*   - 97: Incorrect number of arguments.
*   - 98: Unable to read from source file.
*   - 99: Unable to write to destination file.
*   - 100: Unable to close file descriptor.
*/
int main(int argc, char *argv[])
{
int source, destination, bytesRead, bytesWritten;
char *buffer;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp source_file destination_file\n");
exit(97);
}

buffer = create_buffer(argv[2]);
source = open(argv[1], O_RDONLY);
bytesRead = read(source, buffer, 1024);
destination = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

while (bytesRead > 0)
{
if (source == -1 || bytesRead == -1)
{
dprintf(STDERR_FILENO,
"Error: Unable to read from file %s\n", argv[1]);
free(buffer);
exit(98);
}

bytesWritten = write(destination, buffer, bytesRead);
if (destination == -1 || bytesWritten == -1)
{
dprintf(STDERR_FILENO,
"Error: Unable to write to file %s\n", argv[2]);
free(buffer);
exit(99);
}

bytesRead = read(source, buffer, 1024);
destination = open(argv[2], O_WRONLY | O_APPEND);

}


free(buffer);
close_file(source);
close_file(destination);

return (0);
}
