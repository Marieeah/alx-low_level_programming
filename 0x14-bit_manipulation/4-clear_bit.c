#include "main.h"

/**
* clear_bit - sets the value of a given bit to 0
* @num_ptr: Pointer to the number to modify.
* @bit_index: Index of the bit to clear.
*
* Return: 1 for success, -1 for failure (if bit_index
* is out of bounds).
*/
int clear_bit(unsigned long int *num_ptr, unsigned int index)
{
if (index > 63)
return (-1);

*num_ptr = (~(1UL << index) & *num_ptr);
return (1);
}
