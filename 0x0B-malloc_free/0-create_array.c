#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it
 *  with a specific char.
 *  @size: size of the array
 *  @c: stored char
 *  Return: pointer of an array of chars
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *cr;

	if (size == 0)
	{
		return (NULL);
	}
	cr = malloc(sizeof(c) * size);

	if (cr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		cr[i] = c;
	}
	return (cr);
}
