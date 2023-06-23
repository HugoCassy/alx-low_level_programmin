#include "main.h"
/**
 * print_line - prints a long line
 * @n: line hold value
 * Return: 0
 */
void print_line(int n)
{
	int b;

	if (n > 0)
	{
		for (b = 0; b <= n; b++)
		{
			_putchar ('-');
		}
		_putchar ('\n');
	}
	else
	{
		_putchar('\n');
	}
}
