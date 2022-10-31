#in#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: A pointer to the memory to be filled
 * @n: the number of bytes to be filled
 * @b: the character to fill the memory
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n);
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}

	return (s);
}
