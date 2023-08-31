#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 * Return: Void.
*/

void print_binary(unsigned long int n)
{
	unsigned long int i = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = 0; i < 64; i++)
	{
		if ((n & (1UL << i)) != 0)
			_putchar('1');
		else
			_putchar('0');
	}
}
