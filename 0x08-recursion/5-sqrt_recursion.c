#include <stdio.h>
#include "main.h"

int _sqrt(int n, int p);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to be computed
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - computes natural square root of a number
 * @n: number to be computed
 * @p: number to be iterated
 * Return: natural square root
 */
int _sqrt(int n, int p)
{
	int sqrt = p * p;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (p);
	return (_sqrt(n, p + 1));
}
