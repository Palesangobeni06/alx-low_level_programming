#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
		return (_sqrt(n, 1));
}

/**
 * _sqrt - Calculates natural square root
 * @n: number to calculate the natural square root
 * @i: iterator
 *
 * Return: the resulting square root
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt  == n)
		return (1);

	return (_sqrt(n, i + 1));
}
