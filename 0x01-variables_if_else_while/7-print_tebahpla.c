#include <stdio.h>
/**
 * main - entry point
 * Description: This prints alphabets in reverse followed by newline
 * Return: always 0
 */
int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
