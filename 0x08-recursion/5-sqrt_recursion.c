#include "main.h"

int _sqrt(int x, int y);

/**
 * _sqrt_recursion - function
 * @n: input
 * Return: result
*/

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - function
 * @x: first input
 * @y: second input
 * Return: result
*/

int _sqrt(int x, int y)
{
	if (y * y == x)
		return (y);
	else if (y * y < x)
		return (_sqrt(x, y + 1));
	else
		return (-1);
}
