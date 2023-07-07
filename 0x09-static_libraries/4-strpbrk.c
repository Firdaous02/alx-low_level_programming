#include "main.h"

/**
 * _strpbrk - function
 * @s: first input
 * @accept: second input
 * Return: result
*/

char *_strpbrk(char *s, char *accept)
{
	int i;

	i = 0;
	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])

				return (s);

		}
		s++;
	}
	return ('\0');
}
