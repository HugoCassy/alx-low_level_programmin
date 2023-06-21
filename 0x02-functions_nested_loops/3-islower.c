#include "main.h"
/**
 * _islower - Checks for lowers
 *
 * r: integer value that will be used to compare
 * Return: Always 0 (Success)
 *
 */
int _islower(int r)
{
	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (r);
}
