#include "main.h"
#include <stdio.h>

int prime(int n, int i);

/**
 * is_prime_number - function
 * @n: input
 * Return: result
*/

int is_prime_number(int n)
{
	return (prime(n, 2));
}

/**
 * prime - function
 * @n: first input
 * @i: second input
 * Return: result
*/

int prime(int n, int i)
{
	if (i >= n && n > 1)
		return (1);
	if (n % i == 0 || n <= 1)
		return (0);
	return (prime(n, i + 1));
}
