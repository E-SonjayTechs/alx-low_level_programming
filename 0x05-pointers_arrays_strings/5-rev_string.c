#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: var for string to be reversed
 */
void rev_string(char *s)
{
	char rev = s[0];
	int ch = 0;
	int x;

	while (s[ch] != '\0')
	{
		ch++;
	}

	for (x = 0; x < ch; x++)
	{
		ch--;
		rev = s[x];
		s[x] = s[ch];
		s[ch] = rev;
	}
}
