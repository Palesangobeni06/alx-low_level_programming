#include <stdio.h>

/**
 * main prints the sun of even Fibonacci  numbers
 * less than 40000000.
 * Return: Nothing
 */

int main(void)

{
	int i = 0;
	long j = 1, k = 2, sum = k;

	while (k + j < 4000000)
	{
	k += j;
	j = k - j;
	++i;
	}
	printf("%ld\n", sum);
	return (0);
}
