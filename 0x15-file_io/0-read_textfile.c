#include "main.h"
#include <stdlib.h>

/**
* read_textfile- Read text file print to STDOUT.
* @filename: The name of the text file to be read.
* @letters: The maximum number of bytes to be read and printed.
* Return: The actual number of bytes read and printed.
*         Returns 0 when function fails or if the filename is NULL.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer;
ssize_t fileDescriptor;
ssize_t bytesRead;
ssize_t bytesWritten;

fileDescriptor = open(filename, O_RDONLY);
if (fileDescriptor == -1)
return (0);
buffer = malloc(sizeof(char) * letters);
bytesRead = read(fileDescriptor, buffer, letters);
bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);

free(buffer);
close(fileDescriptor);

return (bytesWritten);
}
