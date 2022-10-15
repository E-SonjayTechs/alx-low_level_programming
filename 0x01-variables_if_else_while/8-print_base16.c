#include <stdio.h>
/**
 * main -entry point
 * Description: This prints all Hex numbers
 * Return: always 0
 */
int main(void)
{
	int n;
	char hexVals[] = "0123456789abcdef";

	for (n = 0; n < 16; n++)
	{
		putchar(hexVals[n]);
	}
	putchar('\n');
	return (0);
}
