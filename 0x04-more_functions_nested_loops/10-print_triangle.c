#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int c, tri;

	if (size > 0)
	{
		for (c = 1; c <= size; c++)
		{
			for (tri = size - c; tri > 0; tri--)
			{
				_putchar(' ');
			}
			for (tri = 0; tri < c; tri++)
			{
				_putchar('#');
			}
			if (c == size)
			{
				continue;
			}
			_putchar('\n');
		}
	}
}
