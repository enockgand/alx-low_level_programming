#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: if s1 < s2, the negative difference of
 *
 * the first unmatched character
 * if s1 == s2, Always 0
 * if s1 > s2, the positive difference of
 *
 * the first unmatched characters
 */
int _strcmp(char *s1, char *s2)
/* compares two strings s1 and s2 */
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
