#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int j, i, k, boundary;
	char *stroutput;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	stroutput = malloc(sizeof(char) * (i + j + 1));

	if (stroutput == NULL)
	{
		free(stroutput);
		return (NULL);
	}

	for (k = 0; k < i; k++)
	{
		stroutput[k] = s1[k];
	}
	boundary = j;
	for (j = 0; j <= boundary; k++, j++)
	{
		stroutput[k] = s2[j];
	}
	return (stroutput);
}
