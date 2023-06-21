#include "main.h"
/**
 * _islower - Checks for lowers
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int r = _islower('H');

	if (r)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
	return (0);
}
