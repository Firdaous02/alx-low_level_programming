#include "main.h"

/**
 * get_bit - Function that returns the value of a bit at a given index.
 * @n: The number of input
 * @index: The index of the bit
 * Return: the value of the bit or -1 on failure.
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return (n & (1UL << index));
}
