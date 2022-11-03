#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome or not
 * @s: string to check
 * Return: 1 if s is palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}

/**
 * comparator - compares each char of a string
 * @s: string
 * @n1: small iterator
 * @n2: biggest iterator
 * Return: something
 */
int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * _strlen_recursion - returns string length
 * @s: string
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
