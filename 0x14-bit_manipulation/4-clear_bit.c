#include "main.h"

/**
 * clear_bit - Function that sets the value of a bit to 0 at a given index
 * @n: The number of input
 * @index: The index of the bit
 * Return: 1 on success, -1 on error
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}
