#include <stdio.h>
#include "main.h"

int check_palindrome(char *s);

/**
 * is_palindrome - determines if a string is a palindrome
 * @s: string to be checked
 * Return: 1(Success) or 0 if otherwise
 */
int is_palindrome(char *s)
{
	if (*s == '0')
		return (1);
	return (check_palindrome(s));
}

/**
 * check_palindrome - determines if a string is a palindrome
 * @s: string to be checked
 * Return: 1(Success) or 0 if otherwise
 */
int check_palindrome(char *s)
{
	int l = _strlen_recursion(s) - 1;

	if (*s == s[l])
	{
		s++;
		l--;
	}
	else
	{
		return (0);
	}
	return (1);
}

/**
 * _strlen_recursion - computes the length of a string
 * @s: string to be checked
 * Return: an integer
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
