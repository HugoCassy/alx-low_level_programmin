#include "main.h"
/**
 * print_array - prints the array
 * @a: array name
 * @n: Array size
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[1]);

		if (i != n - 1)
		{
			printf(", ");
		}
	}
	_putchar ('\n');
}
