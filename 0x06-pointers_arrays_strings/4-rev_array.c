#include "main.h"
/**
 * reverse_array - compares two strings
 * @a: string one
 * @n: string two
 * Return: negative or posit
 */
void reverse_array(int *a, int n)
{
	int i = 0;

	for (i = n - 1; i >= 0; i--)
	{
		_putchar (a[i] + '0');
	}
}
