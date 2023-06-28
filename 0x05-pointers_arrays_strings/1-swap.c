#include "main.h"

/**
 * swp_int - function
 *
 * @a: first input
 * @b: second input
 *
 * Return: return results
*/

void swp_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
