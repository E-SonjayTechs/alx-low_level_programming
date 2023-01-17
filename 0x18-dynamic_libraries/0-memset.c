#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: A pointer to the memory to be filled
 * @n: the number of bytes to be filled
 * @b: the character to fill the memory
 * description: over there
 * Return: pointer to s memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;
	unsigned char *mem = s;

	for (x = 0; x < n; x++)
	{
		mem[x] = b;
	}

	return (mem);
}
