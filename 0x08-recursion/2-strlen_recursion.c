#include "main.h"

/**
 * _strlen_recursion - function
 * @s: the string of input
 * Return: result
*/
int _strlen_recursion(char *s)
{
	int ln = 0;

	if (*s > '\0')
	{
		ln += _strlen_recursion(s + 1) + 1;
	}

	return (ln);
}
