#include "main.h"
#include <stdio.h>

/**
 * print_array -  prints n elements of an array of integers
 * @a: array
 * @n: number of element to nbe printed
 */
void print_array(int *a, int n)
{
	int ar;

	for (ar = 0; ar < n; ar++)
	{
		printf("%d", a[ar]);
		if (ar != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
