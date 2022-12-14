#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: string one
 * @s2: string two
 * @n: amount of bytes
 * Return: pointer to the allocated memory
 * if malloc fails, status value equals 98
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int as1, as2, asout, i;
	char *sout;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
		s2 = "";
	for (as1 = 0; s1[as1] != '\0'; as1++)
		;
	for (as2 = 0; s2[as2] != '\0'; as2++)
		;

	if (n > as2)
		n = as2;

	asout = as1 + n;

	sout = malloc(asout + 1);

	if (sout == NULL)
		return (NULL);

	for (i = 0; i < asout; i++)
		if (i < as1)
			sout[i] = s1[i];
		else
			sout[i] = s2[i - as1];

	sout[i] = '\0';

	return (sout);
}
