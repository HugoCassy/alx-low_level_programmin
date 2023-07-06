#include "main.h"
/**
 * is_prime_number - prints 1 or 0 if no is prime or not
 * @n: number to evaluate
 * Return: n
 */
int is_prime_number(int n)
{
	if (n <= 0 && n / 2 != 0)
	{
		return (1);
	}
	else if (n >= 0 && n / 2 != 0)
	{
		return (0);
	}
	else 
	{
		return (0);
	}
}
