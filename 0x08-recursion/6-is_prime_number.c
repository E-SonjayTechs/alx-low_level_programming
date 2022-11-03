#include "main.h"

/**
 * is_prime_number -  returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @n: number to check
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n == 0 || n < 0 || n == 1)
	{
		return (0);
	}
	else
	{
		return (prime_num(n, 2));
	}
}

/**
 * prime_num - checks if a number is prime or not
 * @n: input
 * @a: iterator
 * Return: 1 - if prime, 0- if not
 */
int prime_num(unsigned int n, unsigned int a)
{
	if (n % a == 0)
	{
		if (n == a)
		{
			return (1);
		}
		else
		{
			return (0);
		}
		return (0 + prime_num(n, a + 1));
	}
}
