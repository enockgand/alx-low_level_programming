#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searchs a string for any of set of bytes
 * @s: the string to search
 * @accept: the bytes to be searched for
 * Return: pointer to the byte in @s that matches one of the bytes in
 * @accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int d;

	while (*s)
	{
		for (d = 0; accept[d]; d++)
		{
			if (*s == accept[d])
				return (s);
		}
		s++;
	}
	return (NULL);
}
