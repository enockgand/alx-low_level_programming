#include <stdio.h>
#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @accept: input
 * @s: input
 * Return: Always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	int t, u;
	int c = 0;

	for (t = 0; s[t] != '\0'; t++)
	{
		if (s[t] != 32)
		{
			for (u = 0; accept[u] != '\0'; u++)
			{
				if (s[t] == accept[u])
					c++;
			}
		}
		else
			return (c);

	}
	return (c);
}
