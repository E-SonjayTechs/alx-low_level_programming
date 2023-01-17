#include "main.h"
/**
 * _abs - Computes the absolute value of an integer
 * @a: the integer to be computed
 * Return: the absolute value
 */
int _abs(int a)
{
	int b = a;
	int absVal;

	if (b < 0)
	{
		b = b * (-1);
	}
	absVal = b;
	return (absVal);
}
