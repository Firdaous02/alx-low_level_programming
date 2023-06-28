#include "main.h"

/**
 * print_rev - function
 *
 * @s: input
 *
 * Return: return results
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
