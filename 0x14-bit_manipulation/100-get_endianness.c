#include "main.h"

/**
* get_endianness - returns the endianness of the system
*
* return: 0 for big endian, 1 if small.
*/
int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;

	return ((int)*c);
}
