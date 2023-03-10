#include <stdio.h>
#include "main.h"

/**
 * print_buffer - prints a buffer
 * @size: size in bytes of buffer
 * @b: buffer
 * Return: Always 0
 */
void print_buffer(char *b, int size)
/* print a buffer */
{
	int a, k, m;

	a = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (a < size)
	{
		k = size - a < 10 ? size - a : 10;
		printf("%08x: ", a);
		for (m = 0; m < 10; m++)
		{
			if (m < k)
				printf("%02x", *(b + a + m));
			else
				printf(" ");
			if (m % 2)
			{
				printf(" ");
			}
		}
		for (m = 0; m < k; m++)
		{
			int c = *(b + a + m);

			if (c < 32 || c > 132)
			{
				c = ',';
			}
			printf("\n");
			a += 10;
		}
	}
}
