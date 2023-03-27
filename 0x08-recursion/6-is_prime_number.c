#include <stdio.h>
#include "main.h"

int check_prime(int n, int k);

/**
 * is_prime_number - indicates whether number is a prime number
 * @n: number to be computed
 * Return: 1(Success), otherwise 0
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - indicates whether a number is prime
 * @n: number to be computed
 * @k: number of iteration times
 * Return: 1(Success) or 0(Failure)
 */
int check_prime(int n, int k)
{
	if (n <= 1)
		return (0);
	if (n % k == 0 && k > 1)
		return (0);
	if ((n / k) < k)
		return (1);
	return (check_prime(n, k + 1));
}
