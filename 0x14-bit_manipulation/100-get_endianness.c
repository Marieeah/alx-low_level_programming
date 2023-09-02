#include "main.h"

/**
* get_endianness - checks if a machine is little or big endian
*
* return: 0 for big endian, 1 for little endian.
*/
int get_endianness(void)
{
unsigned int num = 1;
char *c = (char *) &num;

return (*c);
}