#include <stdio.h>
#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: name of string
 * @needle: name of substring
 * Return: pointer to the beginning of the located string
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int k;
	int s = 0;

	while (needle[s] != '\0')
		s++;

	while (*haystack)
	{
		for (k = 0; needle[k]; k++)
		{
			if (haystack[k] != needle[k])
				break;
		}
		if (k != s)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
