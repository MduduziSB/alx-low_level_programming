#include <stdio.h>
#include "main.h"
/**
 * _str_len - computes string length
 * @s: string
 * Return: integer
 */
int _str_len(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
/**
 * _test - checks if string is a palindrome
 * @f: first
 * @l: last
 * @s: string
 * Return: 1 (success) 0 (failure)
 */
int _test(int f, int l, char *s)
{
	if (f == (l + 1) / 2)
		return (1);
	if (s[f] != s[l - f])
		return (0);
	else
		return (_test(f + 1, l, s));
}
/**
 * is_palindrome - evaluates if a string is a palindrome
 * @s: string
 * Return: 1 (success) 0 (failure)
 */
int is_palindrome(char *s)
{
	int i = 1, len;

	len = _str_len(s);
	if (i == len)
		return (1);
	else
		return (_test(0, len - 1, s));
}

