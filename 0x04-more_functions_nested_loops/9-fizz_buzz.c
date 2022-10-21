#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 * for multiples of three print Fizz
 * for the multiples of five print Buzz
 * Return: always 0
 */
int main(void)
{
	int num;

	printf("1");
	for (num = 2; num <= 100; num++)
	{
		printf(" ");
		if (num % 3 == 0)
		{
			printf("Fizz");
		}
		if (num % 5 == 0)
		{
			printf("Buzz");
		}
		if (num % 3 != 0 && num % 5 != 0)
		{
			printf("%d", num);
		}
	}
	printf("\n");
	return (0);
}
