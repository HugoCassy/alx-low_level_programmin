#include "main.h"
/**
 * is_prime_number - main function
 * @n: number to evaluate
 * @i: number to evauate i
 * Return: is_prime_helper
 */
int is_prime_number(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}

	if (i == 1)
	{
		return (1);
	}

	if (n % i == 0)
	{
		return (0);
	}

	return (is_prime_number(n, i - 1));
}
