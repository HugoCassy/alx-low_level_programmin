#include "main.h"
/**
 * more_numbers - Prints numbers 10 times
 * Return: 0
 */
void more_numbers(void)
{
	int r, s;


	for (r = 0; r <= 10; r++)
	{
		for (s = 0; s <= 14; s++)
		{
			_putchar (s + '0');
		}
		_putchar ('\n');
	}
}
