#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 *
 * @c: last digit
 * Return: Always 0 (Success)
 */
int print_last_digit(int c)
{
	int b = c % 10;

	if (b < 0)
	{
		_putchar (-b + '0');
		return (-b);
	}
	else
	{
		_putchar (b + '0');
		return (b);
	}
}
