#include <stdio.h>
#include "main.h"

/**
 * main - entry point to the program
 * @argc: argument counter
 * @argv: argument vector array and pointer
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
