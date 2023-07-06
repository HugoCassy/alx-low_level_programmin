#include "main.h"
/**
 * _sqrt_recursion- helps the main function
 * @n: Large digit
 * Return: n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recursion_funct(n, 0, n));
}
/**
 * _sqrt_recursion_funct - function to get the sqyuar root
 * @n: actual number
 * @sta: starting number
 * @end: ending number
 * Return: n, sta, end
 */
int _sqrt_recursion_funct(int n, int sta, int end)
{
	int middle;
	int square;

	if (sta > end)
	{
		return (-1);
	}
	middle = (sta + end) / 2;
	square = middle * middle;

	if (square == n)
	{
		return (middle);
	}
	else if (square < n)
	{
		return (_sqrt_recursion_funct(n, middle + 1, end));
	}
	else
	{
		return (_sqrt_recursion_funct(n, sta, middle - 1));
	}
}
