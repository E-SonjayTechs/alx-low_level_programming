#include <unistd.h>

/**
 * _putchar - prints a character to the standard output
 * @c: the character to print
 * Return: nothing
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
