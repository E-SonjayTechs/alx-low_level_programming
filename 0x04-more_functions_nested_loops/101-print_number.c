#include "main.h"

/**
 * print_number - prints an integer
 * @n: input an integer
 * Return: nothing
 */
void print_number(int n)
{
	unsigned int a, c, counter;

	if (a < 0)
	{
		_putchar('-');
		a = n * -1;
	}
	else
	{
		a = n;
	}
	c = a;
	counter = 1;

	while (c > 0)
	{
		c /= 10;
		counter *= 10;
	}

	for (; counter >= 1; counter /= 10)
	{
		_putchar(((a / counter) % 10) + 48);
	}
}
