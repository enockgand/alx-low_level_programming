#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @d: the number to be computed
 * Return: absolute value of number or 0
 */
int _abs(int d)
{
	if (d < 0)
	{
		int abs_value;

		abs_value = d * -1;

		return (abs_value);
	}
	return (d);
}
