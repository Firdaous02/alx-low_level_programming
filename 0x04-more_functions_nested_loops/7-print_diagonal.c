#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the input
*/

void print_diagonal(int n)
{
	int postn, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (postn = 1; postn <= n; postn++)
		{
			for (space = 1; space <= n; space++)
				_putchar(' ');
			_putchar(92);
			-putchar('\n');
		}
	}
}
