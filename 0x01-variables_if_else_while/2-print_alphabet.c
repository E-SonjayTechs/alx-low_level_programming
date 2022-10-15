#include <stdio.h>

/**
 * main - entry point
 * Description: A program to print alphabets in lowercase
 * Return: Always 0
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
