#include <unistd.h>

/**
 * _putchar - prints a character to the standard output
 * @c: character to print
 * return: nothing
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
