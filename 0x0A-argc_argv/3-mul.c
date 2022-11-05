#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entry point and multiplies numbers
 * @argc: aargument counter
 * @argv: argument vector array pointer
 * Return: 1 if two args are present, else Error
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
