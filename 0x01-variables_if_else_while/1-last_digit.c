#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point to the program
 *
 * Description: checks if a number is 5, 0, or between 0 and 6
 *
 * Return: Alway 0
 */

int main(void)
{
	int n;
	int lastDig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastDig = n % 10;

	if (lastDig > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDig);
	}
	else if (lastDig == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastDig);
	}
	else if (lastDig != 0 && lastDig < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDig);
	}
	return (0);

}
