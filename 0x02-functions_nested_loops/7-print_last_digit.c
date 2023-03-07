#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @k: number to be considered
 * Return: last digit of the number
 */
int print_last_digit(int k)
{
	int last_dig;

	last_dig = k % 10;

	if (last_dig < 0)
	{
		last_dig = last_dig * -1;
	}
	_putchar(last_dig + '0');
	return (last_dig);
}
