#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 *@n: the last digit
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int lastDigi = n % 10;

	if (lastDigin < 0)
	{
		lastDigi *= -1;
	}
	_putchar(lastDigi + '0');

	return (lastDigi);
}
