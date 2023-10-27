#include "main.h"

/**
* set_bit - Sets the value of a bit at a
* specified index in a decimal
*                  number to 1.
*
* @num_ptr: Pointer to the number to be modified.
* @index: index of the bit to set to 1
*
* Return: 1 for success, -1 for failure
*/
int set_bit(unsigned long int *num_ptr, unsigned int index)
{
if (index > 63)
return (-1);

*num_ptr = ((1UL << index) | *num_ptr);
return (1);
}
