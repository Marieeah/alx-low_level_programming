#include "main.h"

/**
* clear_bit - sets the value of a given bit to 0
* @num_ptr: Pointer to the number to modify.
* @index: the bit to clear.
*
* Return: 1 for success, -1 for failure (if bit_index
* is out of bounds).
*/
int clear_bit(unsigned long int *num_ptr, unsigned int index)
{
if (index >= sizeof(num_ptr) * 8)
return (-1);

if (*num_ptr & 1L << index)
	*num_ptr ^= 1L << index;
return (1);
}
