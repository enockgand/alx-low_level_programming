#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int dlen = 0, d;

	while (dest[dlen])
	{
		dlen++;
	}
	for (d = 0; src[d] != 0; d++)
	{
		dest[dlen] = src[d];
		dlen++;
	}
	dest[dlen] = '\0';
	return (dest);
}
