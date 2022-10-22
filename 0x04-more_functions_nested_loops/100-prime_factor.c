#include <stdio.h>

/**
 * main - prints largest prime factor
 * Return: always 0
 */
int main(void)
{
	long int num, pf;

	num = 612852475143;
	for (pf = 2; pf <= num; pf++)
	{
		if (num % pf == 0)
		{
			num /= pf;
			pf--;
		}
	}
	printf("%ld\n", pf);
	return (0);
}
