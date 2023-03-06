#include "main.h"
#include <stdio.h>

/**
 * string_toupper - changes all lowercase letters of
 * a string to uppercase
 * @str: name of string
 * Return: pointer to the modified string
 */
char *string_toupper(char *str)
/* changes all lowercase letters of string str to uppercase */
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		str[index] -= 32;
		index++;
	}
	return (str);
}
