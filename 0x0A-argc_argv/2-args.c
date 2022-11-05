#include <stdio.h>
#include "main.h"

/**
 * main - entry point and prints all arguments recevied
 * @argc: argument counter
 * @argv: argument vector array pointer
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int x = 0;

	while (x < argc)
	{
		printf("%s\n", argv[x]);
		x++;
	}

	return (0);
}
