#include "main.h"
/**
 * is_prime_helper - function to print primes
 * @n: number to evaluate
 * @i: number to evauate i
 * Return: n and i
 */
int is_prime_helper(int n, int i)
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
	return (is_prime_helper(n, i - 1));
}
/**
 * is_prime_number - second function
 * @n: number to evaluate
 * Return: n
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, n - 1));
}
