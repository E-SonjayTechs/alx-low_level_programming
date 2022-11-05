#include <unistd.h>

/**
 * _putchar - prints a character to the standard output
 * @c: character to be printed
 * Return: nothing
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
