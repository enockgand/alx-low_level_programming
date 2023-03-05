#include "main.h"

/**
 * _puts - Prints a string
 * @str: string to be printed
 * Return: void
 */

void _puts(char *str)

{
	for (; *str != '\0'; str++)
	{
	 putchar(*str);
	}
	 putchar('\n');
}
