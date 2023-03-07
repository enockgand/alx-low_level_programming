#include <stdio.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 * @c: character in the string
 * @s: name of string
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int d;

	for (d = 0; s[d] >= '\0'; d++)
	{
		if (s[d] == c)
			return (s + d);
	}
	return (NULL);
}
