#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  prints the sum of the two diagonals of
 * a square matrix of integers.
 * @a: matrix of integers
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int x, s1 = 0, s2 = 0;

	for (x = 0; x < size; x++)
	{
		s1 += a[x];
		a += size;
	}

	a -= size;

	for (x = 0; x < size; x++)
	{
		s2 += a[x];
		a -= size;
	}

	printf("%d, %d\n", s1, s2);
}
