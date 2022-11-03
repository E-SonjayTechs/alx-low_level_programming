#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: number to find its factorial
 * Return: if n > 0 - ret the factorial of n
 * if n < 0 - ret -1 to indicate error
 */
int factorial(int n)
{
	int res = n;

	if (n < 0)
	{
		return (-1);
	}
	else if (n >= 0 || n <= 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
