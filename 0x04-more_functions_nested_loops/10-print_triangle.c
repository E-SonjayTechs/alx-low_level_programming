#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int c, tri;

	for (c = 0; c < size; c++)
	{
		for (tri = 1; tri < (size - c); tri++)
		{
			_putchar(' ');
		}
		for (tri--; tri < size; tri++)
		{
			_putchar('#');
		}
		if (c < (size - 1))
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
