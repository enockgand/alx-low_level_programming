#include <stdio.h>

/**
 * swap_int - Swaps the values of two integers
 * @a: The first integer to be swapped
 * @b: The second integer to be swapped
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
/* the function that swaps the values of two integers.*/
{
	int a_pointer = *a;
	*a = *b;
	*b = a_pointer;
}
