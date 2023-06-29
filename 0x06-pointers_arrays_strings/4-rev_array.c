#include "main.h"
/**
 * reverse_array - compares two strings
 * @a: string one
 * @n: string two
 * Return: negative or posit
 */
void reverse_array(int *a, int n)
{
	int j, em;

	for (j = 0; j < n / 2; j++)
	{
		em = a[j];
		a[j] = a[n - 1 - j];
		a[n - 1 - j] = em;
	}
}
