#include "main.h"

/**
 * _abs - calculates the absolute value of an integer
 *
 * @n: takes the input
 *
 * Return: 0 (success)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
