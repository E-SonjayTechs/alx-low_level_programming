#include <unistd.h>

/**
 * _putchar - prints a character to the standard output
 * @c: character to print
 * Return: 1 on success, 0 otherwise
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
