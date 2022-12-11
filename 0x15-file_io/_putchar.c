#include <unistd.h>

/**
 * _putchar - prints a character tot the standard output
 * @c: character to print
 * Return: nothing
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
