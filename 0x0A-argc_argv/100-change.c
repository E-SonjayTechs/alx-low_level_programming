#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - entry point and prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: argument counter
 * @argv: argument vector array pointer
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int pos, tot, change, aux;
	int coins[] = {25, 10, 5, 2, 1};

	pos = tot = change = aux = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	tot = atoi(argv[1]);
	if (tot <= 0)
	{
		printf("0\n");
		return (0);
	}

	while (coins[pos] != '\0')
	{
		if (tot >= coins[pos])
		{
			aux = (tot / coins[pos]);
			change += aux;
			tot -= coins[pos] * aux;
		}
		pos++;
	}
	printf("%d\n", change);
	return (0);
}
