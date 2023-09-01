#include "main.h"

/**
* flip_bits - Calculates the number of bits required to transform
* one number into another.
* @n: The first number.
* @m: The second number.
*
* Return: number of bits to change
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int index;
unsigned int bit_count = 0;
unsigned long int current;
unsigned long int difference = n ^ m;

for (index = 63; index >= 0; index--)
{
current = difference >> index;
if (current & 1)
bit_count++;
}

return (bit_count);
}
