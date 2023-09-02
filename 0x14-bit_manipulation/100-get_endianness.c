#include "main.h"

/**
* get_endianness - checks if a machine is little or big endian
*
* return: 0 for big endian, 1 if small.
*/
int get_endianness(void)
{
unsigned long int n = 1;

return (*(char *)&n);
}
