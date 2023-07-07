#include "main.h"

/**
 * _memset - function
 * @s: first input
 * @b: second input
 * @n: third input
 * Return: result
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
