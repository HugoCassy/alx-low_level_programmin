#include "main.h"
/**
 * print_number - prints an integer
 * @c: holds the integer
 * Return: 0
 */
void print_number(int c)
{
	if (c < 0)
	{
		_putchar ('-');
		c = -c;
	}

	int line = 1;

	while (c / line >= 10)
	{
		line = line * 10;
	}
	while (line > 0)
	{
		int number = c / line;

		_putchar (number + '0');
		c %= line;
		line /= 10;
	}
	_putchar ('\n');
}
