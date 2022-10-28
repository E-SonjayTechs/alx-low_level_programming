#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int c, b;

	for (b = 0; b < n; b++)
	{
		n--;
		c = a[b];
		a[b] = a[n];
		a[n] = c;
	}
}
