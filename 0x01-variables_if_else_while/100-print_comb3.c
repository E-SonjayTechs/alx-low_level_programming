#include <stdio.h>
/**
 * main - entry point
 * Description: This prints un repeated combination of two digits
 * Return: always 0
 */
int main(void)
{
	int a, fixN = '0', b;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = fixN; b <= '9'; b++)
		{
			if (a != b)
			{
				putchar(a);
				putchar(b);
			}
			if (a == b)
			{
				continue;
			}
			if (a == '8' && b == '9')
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
		fixN++;
	}
	putchar('\n');
	return (0);
}

