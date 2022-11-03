#include "main.h"

/**
 * is_prime_number -  returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @n: number to check
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	int a = n / 2;

	if (n == 0 || n < 0 || n == 1)
	{
		return (0);
	}
	else
	{
		for (int i = 2; i <= a; i++)
		{
			if (n % i == 0)
			{
				return (0);
			}
			else
			{
				return (1);
			}
		}
	}
}
