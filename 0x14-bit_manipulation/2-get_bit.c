#include "main.h"

/**
*  get_bit - Retrieves the value of a bit at a
*  specific index in a decimal number.
* @n: The number to search.
* @index: The index of the bit to retrieve.
*
* Return: The value of the specified bit, or -1 if the index is out of range.
*/
int get_bit(unsigned long int n, unsigned int index)
{

if (index >= sizeof(n) * 8)
return (-1);

return (n >> index & 1);

}
