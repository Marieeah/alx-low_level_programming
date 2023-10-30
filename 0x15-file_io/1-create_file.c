#include "main.h"

/**
* create_file - Creates a file and writes content to it.
* @filename: A pointer to the name of the file to created.
* @text_content: A pointer to a string to written to the file.
*
* Return: If the function fails - -1.
*         If successful - 1.
*/
int create_file(const char *filename, char *text_content)
{
int fileDescriptor, writeResult;
int length = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (length = 0; text_content[length];)
length++;
}

fileDescriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
writeResult = write(fileDescriptor, text_content, length);

if (fileDescriptor == -1 || writeResult == -1)
return (-1);

close(fileDescriptor);

return (1);
}
