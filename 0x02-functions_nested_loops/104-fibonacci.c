#include "main.h"

/**
 * numlength - returns the length of string
 *
 * @n: operand number
 *
 * Return: number of digits
*/

int numlength(int n)
{
	int lenth = 0;

	if (!n)
		return (1);

	while (n)
	{
		n = n / 10;
		length += 1
	}
	return (length);
}

/**
 * main - Entry point
 *
 * Description: prints Fibonacci numbers.
 *
 * Return: 0 (success)
*/

int main(void)
{
	int count, initial;
	unsigned long fib1 = 1, fib2 = 2, sum, m = 100000000;
	unsigned long fibo2 = 0, fibo2 = 0, sumo = 0;

	for (count = 1; count <= 98; count++)
	{
		if (fibo1 > 0)
			printf("%lu", fibo1);
		initial = numlength(m) - 1 - numlength(fib1);

		while (fibo1 > 0 && initial > 0)
		{
			printf("%d", 0);
			initial--;
		}
		printf("%lu", fib1);

		sum = (fib1 + fib2) % m;
		sumo = fibo1 + fibo2 + (fib1 + fib2) / m;
		fib1 = fib2;
		fibo1 = fibo2;
		fib2 = sum;
		fibo2 = sumo;

		if (count != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
