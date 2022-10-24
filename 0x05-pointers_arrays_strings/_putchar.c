#include <unistd.h>

/**
 * _putchar - prints the given character to stdout
 * @c: char var to be printed
 * Return: 1 - On success, 0 - On failur
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
