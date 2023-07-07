#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: arguments values
 * Return: 0 success
*/

int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		print("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
