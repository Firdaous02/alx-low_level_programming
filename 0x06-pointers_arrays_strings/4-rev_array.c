#include "main.h"

/**
 * reverse_array - function
 *
 * @a: first input
 * @n: second input
 *
 * Return: result
*/

void reverse_array(int *a, int n)
{
	int i, j, t;

	for (i  = 0, j = (n - 1); i < j; i++, j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
