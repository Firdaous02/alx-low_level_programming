#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
*/

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i1, i2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i1 = i2 = 0;
	while (s1[i1] != '\0')
		i1++;
	while (s2[i2] != '\0')
		i2++;
	concat = malloc(sizeof(char) * (i1 + i2 + 1));

	if (concat == NULL)
		return (NULL);
	i1 = i2 = 0;
	while (s1[i1] != '\0')
	{
		concat[i1] = s1[i1];
		i1++;
	}

	while (s2[i2] != '\0')
	{
		concat[i1] = s2[i2];
		i1++, i2++;
	}
	concat[i1] = '\0';
	return (concat);
}

