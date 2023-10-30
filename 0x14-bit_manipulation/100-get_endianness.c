#include "main.h"
#include <stdio.h>
/**
* get_endianness - returns the endianness of the system
*
* @return 0 for little endian, 1 for big endian.
*/
int get_endianness(void);
{
unsigned int x = 1;
char *c = (char *)&x;

return ((int)*c);
}
