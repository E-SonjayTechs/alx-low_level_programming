#include <stdio.h>
/**
 * main -entry point
 * Description: This prints single numbers of base 10
 * Return: always 0
 */
int main(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
