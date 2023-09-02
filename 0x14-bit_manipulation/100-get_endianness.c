#include "main.h"

/**
* get_endianness - returns the endianness of the system
*
* return: 0 for big endian, 1 if small.
*/
int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == 1)
		return (1);
return (0);
}
