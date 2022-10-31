#include "main.h"

/**
 * _strspn -  gets the length of a prefix substring
 * @s: string to be searched
 * @accept: prefix to be measured
 * Return: number of byte in s which consist only of
 * bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int mybytes = 0;
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				mybytes++;
				break;
			}
			else if (accept[x + 1] == '\0')
			{
				return (mybytes);
			}
		}
		s++;
	}
	return (mybytes);
}
