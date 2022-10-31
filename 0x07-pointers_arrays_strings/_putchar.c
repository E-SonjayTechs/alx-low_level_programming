#include <unistd.h>
#include "main.h"

/**
 * _putchar - prints the character c to std out
 * @c: character to print
 * Return: 1 on success, 0 otherwise
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
