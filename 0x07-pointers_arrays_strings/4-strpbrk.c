#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: set of bytes to be searched for
 * Return: if a set matches, set pointer to matched byte,
 * otherwise, set NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++;)
		{
			if (*s == accept[x])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
