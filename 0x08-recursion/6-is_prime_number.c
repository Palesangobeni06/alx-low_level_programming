#include "main.h"

int actual_prime(int n, int i);

/**
 * is _prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if nis a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @n: The number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && 1 > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
