#include "main.h"
/**
 * _abs - Prints the output
 * @c: Value to store the numbers
 * Return: Always 0 (Success)
 */
int _abs(int c)
{
	if (c < 0)
	{
		_putchar('-');
		return (c);
	}
	else
	{
		_putchar('+');
		return (c);
	}
}
