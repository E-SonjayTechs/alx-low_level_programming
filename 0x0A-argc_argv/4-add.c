#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * check_num - checks if input is a number
 * @str: string array
 * Return: always 0
 */
int check_num(char *str)
{
	unsigned int count = 0;

	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
			return (0);
		count++;
	}
	return (1);
}

/**
 * main - entry point and adds numbers
 * @argc: argument counter
 * @argv: argument vector array pointer
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int counter = 1, sum = 0, str_to_int;

	while (counter < argc)
	{
		if (check_num(argv[counter]))
		{
			str_to_int = atoi(argv[counter]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		counter++;
	}
	printf("%d\n", sum);
	return (0);
}
