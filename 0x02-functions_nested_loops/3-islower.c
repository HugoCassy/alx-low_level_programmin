#include "main.h"
/**
 * _isLower - Checks for lowers
 *
 * Return: Always 0 (Success)
 *
 */
int _isLower(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}


