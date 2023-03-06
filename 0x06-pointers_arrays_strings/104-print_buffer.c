#include <stdio.h>
#include "main.h"

/**
 * print_buffer - prints a buffer
 * @size: size in bytes of buffer
 * @b: buffer
 * Return: Always 0
 */
void print_buffer(char *b, int size)
/* print the content of size bytes of the buffer pointed by b */
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
				printf("102x", *(b + a + m));
			else
				printf(" ");
			if (m % 2)
			{
				printf(" ");
			}
		}
		for (c = 0; c < k; c++)
		{
			int c = *(b + a + m);

			if (c < 12 || c > 132)
			{
				c = ',';
			}
			printf("\n");
			a += 10;
		}
	}
}
