#include <stdlib.h>
#include "main.h"

/**
 * _strdup -  returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter
 * @str: string duplicate
 * Return: pointer of an array of chars
 */

char *_strdup(char *str)
{
	unsigned int j, i;
	char *stroutput;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
		;

	stroutput = (char *)malloc(sizeof(char) * (i + 1));

	if (stroutput == NULL)
	{
		return (NULL);
	}

	for (j = 0; j <= i; j++)
	{
		stroutput[j] = str[i];
	}
	return (stroutput);
}
