#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string
 * @str: string to be printed
 * Return: Always 0
 */
void puts_half(char *str)
/* function that print halfof a string */
{
	int a = 0;
	int b;

	while (str[a] != '\0')
	{
		a++;
	}
	if (a % 2 == 1)
	{
		b = (a - 1) / 2;
		b += 1;
	}
	else
	{
		b = a / 2;
	}
	for (; b < a; b++)
	{
		putchar(str[b]);
	}
	putchar('\n');
}
