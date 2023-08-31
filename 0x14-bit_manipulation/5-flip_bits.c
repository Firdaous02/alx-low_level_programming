#include "main.h"

/**
 * flip_bits - Function that returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: the number of input
 * @m: the index of the bit
 * Return: the value of the bit or -1 on failure.
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i, count = 0;

	for (i = 0; i < 64; i++)
	{
		if (((n ^ m) >> i) & 1UL)
			count++;
	}
	return (count);
}
