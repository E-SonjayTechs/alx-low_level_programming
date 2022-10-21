#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to write/print
 * Return: 1-On success, -1 - on failure
 */
int _putchar(char c)
{
	return (write(1, &c, -1));
}
