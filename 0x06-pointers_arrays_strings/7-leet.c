#include <stdio.h>
#include "main.h"

/**
 * leet - encodes a string into 1337
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
/* encodes string n into 1337 */
{
	int d, p;
	char s1[] = "aAeEo0tTlL";
	char s2[] = "4433007711";

	for (d = 0; n[d] != '\0'; d++)
	{
		for (p = 0; p < 10; p++)
		{
			if (n[d] == s1[p])
			{
				n[d] = s2[p];
			}
		}
	}
	return (n);
}