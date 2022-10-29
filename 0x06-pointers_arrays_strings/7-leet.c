#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @n: input
 * Return: the value of n
 */
char *leet(char *n)
{
	int i = 0, j;
	int s1[] = {97, 101, 111, 116, 108};
	int s2[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(n + i) != '\0';)
	{
		for (j = 0; j < 5; j++)
		{
			if (*(n + i) == s1[j] || *(n + i) == s2[j])
			{
				*(n + i) = numbers[j];
				break;
			}
		}
		i++;
	}
	return (n);
}
