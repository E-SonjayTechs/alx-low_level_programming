#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point to our program
 *
 * Description: A program that checks if it is zero, positive or negative
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	if (n > 0)
	{
		printf("is positive\n");
	}
	else if (n == 0)
	{
		printf("is zero\n");
	}
	else if (n < 0)
	{
		printf("is negative\n");
	}
	return (0);

}
