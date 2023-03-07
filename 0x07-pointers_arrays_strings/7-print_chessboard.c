#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: row number of the array
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, n;

	for (i = 0; i < 8; i++)
	{
		for (n = 0; n < 8; n++)
			putchar(a[i][n]);
		putchar('\n');
	}
}
