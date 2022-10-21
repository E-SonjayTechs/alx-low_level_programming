#include <stdio.h>

/**
 * main - comment out the bug statement line
 * Return: always 0
 */
int main(void)
{
	int i;

	printf("Infinite loop incoming:\n");

	i = 0;

	/*while (i < 10)*/
	/*{*/
	/*	_putchar(i);*/
	/*}*/

	printf("Infinite loop avoided \\o/\n");
	return (0);
}
