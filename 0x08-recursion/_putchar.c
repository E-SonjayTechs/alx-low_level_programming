#include <unistd.h>

/**
 * _putchar - prints a chracter to the standard out
 * @c: character to print
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
