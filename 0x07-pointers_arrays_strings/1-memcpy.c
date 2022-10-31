#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: pointer to the memory area
 * @src: buffer source
 * @n: number of bytes to copy from src
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;
	unsigned char *mydest = dest;

	for (x = 0; x < n; x++)
	{
		mydest[x] = src[x];
	}

	return (mydest);
}
