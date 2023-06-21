#include "main.h"
/**
 *print_to_98 - Print numbers from 1 to 98
 *@n: value to hold digits;
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	for (n = 1; n <= 98; n++)
	{
		_putchar (n + '0');
	}
}

