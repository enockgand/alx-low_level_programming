#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string
 * @str: name of string
 * Return: Always 0
 */
void puts2(char *str)
/* function that prints every other character of a string */
{
	int b;
	int q = 0;

	while (str[q] != '\0')
	{
		q++;
	}
	for (b = 0; b < q; b += 2)
	{
		putchar(str[b]);
	}
	putchar('\n');
}
