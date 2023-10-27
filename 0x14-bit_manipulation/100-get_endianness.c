#include "main.h"
#include <stdio.h>
/**
* get_endianness - returns the endianness of the system
*
* return: 0 for big endian, 1 if small.
*/
int get_endianness(void)
{
unsigned int x = 1;
char *c = (char *)&x;

return ((int)*c);
}
