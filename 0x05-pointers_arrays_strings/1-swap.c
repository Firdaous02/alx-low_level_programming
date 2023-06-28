#include "main.h"

/**
 * swap_int - function
 *
 * @a: first input
 * @b: second input
 *
 * Return: return results
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
