#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: argument counter
 * @av: argument vector
 * Return: pointer of an array of chars
 */

char *argstostr(int ac, char **av)
{
	int c, i, ia, j;
	char *aout;

	if (ac == 0)
		return (NULL);
	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);
		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}
	aout = malloc(sizeof(char) * (c + 1));
	if (aout == NULL)
	{
		free(aout);
		return (NULL);
	}
	for (i = j = ia = 0; ia < c; j++, ia++)
	{
		if (av[i][j] == '\0')
		{
			aout[ia] = '\n';
			i++;
			ia++;
			j = 0;
		}
		if (ia < c - 1)
			aout[ia] = av[i][j];
	}
	aout[ia] = '\0';
	return (aout);
}
