#include "main.h"
/**
 * _islower - Checks for lowers
 * @r:  integer value that will be used to compare
 * Return: Always 0 (Success)
 */
int _islower(int r)
{
	if (r >= 'a' && r <= 'z')
	{
		_putchar(1);
	}
	else
	{
		_putchar(0);
	}
	_putchar('\n');
	return ('\0');
}
