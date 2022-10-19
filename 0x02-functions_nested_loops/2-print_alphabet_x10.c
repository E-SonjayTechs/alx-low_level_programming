#include "main.h"

/**
 * print_alphabet_x10 - prints all alphabets in lowercase 10 times
 */
void print_alphabet_x10(void)
{
	char al;
	int x10;

	for (x10 = 0; x10 < 10; x10++)
	{
		for (al = 'a'; al <= 'z'; al++)
		{
			_putchar(al);
		}
		_putchar('\n');
	}
}
