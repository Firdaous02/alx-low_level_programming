#include "main.h"

/**
 * _strlen - function
 *
 * @s: input
 *
 * Return: return results
*/

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;

	return (counter);
}
