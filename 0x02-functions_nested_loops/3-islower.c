#include "main.h"

/**
 * _islower - to check if the character is lowercase or not.
 *
 * @c: checks input of function
 *
 * Return: returns 1 if c is lowercase if not 0 (success)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
