#include "main.h"
/**
 * jack_bauer - prints all the time of the day
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int c;
	int d;

	for (c = 0; c <= 24; c++)
	{
		for (d = 0; d <= 60; d++)
		{
			_putchar (c + '0');
			_putchar (':');
			_putchar (d + '0');
		}
	}
}

