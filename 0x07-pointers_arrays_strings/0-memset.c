#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 * @b: constant byte
 * @s: name of memory area
 * @n: first number of bytest to be filled to memory area
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
		s[k] = b;
	return (s);
}
