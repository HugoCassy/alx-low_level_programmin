#include "main.h"
/**
 * _islower - Checks for lowers
 * @r:  integer value that will be used to compare
 * Return: Always 0 (Success)
 */
int _islower(void)
{
	int r;

	scanf("%d", &r);

	if (r >= 97 && r <= 122)
	{
		_putchar(1);
	}
	else
	{
		_putchar(0);
	}
	_putchar('\n');
	return (0);
}
