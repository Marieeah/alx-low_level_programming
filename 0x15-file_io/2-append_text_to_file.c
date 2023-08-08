#include "main.h"

/**
* append_text_to_file - Appends text at the end of a file.
* @filename: A pointer to the name of the file.
* @text_content: The string to be appended to the end of the file.
*
* Return:If the function fails due to invalid input - returns -1.
*         Otherwise, returns 1.
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fileDescriptor, writeResult, length = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (length = 0; text_content[length];)
length++;
}

fileDescriptor = open(filename, O_WRONLY | O_APPEND);
writeResult = write(fileDescriptor, text_content, length);

if (fileDescriptor == -1 || writeResult == -1)
return (-1);

close(fileDescriptor);

return (1);
}
