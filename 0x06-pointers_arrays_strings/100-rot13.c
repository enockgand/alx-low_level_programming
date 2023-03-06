#include <stdio.h>
#include "main.h"

/**
 * rot13 - encodes a string
 * @s: pointer to string parameters
 * Return: *s
 */
char *rot13(char *s)
{
	int b;
	int c;
	char data1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char datarot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (b = 0; s[b] != '\0'; b++)
	{
		for (c = 0; c < 52; c++)
		{
			if (s[b] == data1[c])
			{
				s[b] = datarot[c];
				break;
			}
		}
	}
	return (s);
}
