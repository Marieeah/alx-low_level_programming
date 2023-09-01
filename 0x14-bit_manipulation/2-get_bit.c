#include "main.h"

/**
*  get_bit - Retrieves the value of a bit at a
*  specific index in a decimal number.
* @Number: The decimal number to search.
* @index: The index of the bit to retrieve.
*
* Return: The value of the specified bit, or -1 if the index is out of range.
*/
int get_bit(unsigned long int number, unsigned int index)
{
int bitValue;

if (index > 63)
return (-1);

bitValue = (number >> index) & 1;

return (bitValue);
}
