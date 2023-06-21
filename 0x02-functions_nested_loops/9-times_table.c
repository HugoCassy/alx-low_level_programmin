#include "main.h"
/**
 * times_table - Prints timestable
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int a;

	for (a = 0; a <= 9; a += 9)
	{
		putchar (a + '0');
	}
}
