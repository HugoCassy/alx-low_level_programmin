#include "main.h"
/**
 * print_number - prints an integer
 * @n: holds the integer
 * Return: 0
 */
void print_number(int n)
{
	int line;

	line = 1;

	if (n < 0)
	{
		_putchar ('-');
		n = -n;
	}

	while (n / line >= 10)
	{
		line = line * 10;
	}
	while (line > 0)
	{
		int number = n / line;

		_putchar (number + '0');
		n %= line;
		line /= 10;
	}
	_putchar ('\n');
}
