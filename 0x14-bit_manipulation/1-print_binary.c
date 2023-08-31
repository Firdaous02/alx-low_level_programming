#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 * Return: Void.
*/

void print_binary(unsigned long int n)
{
	unsigned long int i = 1, count = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = 64; i > 0; i--)
	{
		if (((n >> i) & 1) != 0)
		{
			_putchar('1');
			count++;
		}
		else
			_putchar('0');
	}
	if (count != 0)
                        _putchar('0');
}
