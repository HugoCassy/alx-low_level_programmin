#include "main.h"
/**
 * _sqrt_recursion - returns the natural squareroot of a number
 *
 * _sqrt_recursion_funct - helps the main function
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
int _sqrt_recursion_funct(int n, int sta, int end)
{
	if (sta > end)
	{
		return (-1);
	}
	int middle = (sta + end) / 2;
	int square = middle * middle;

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
