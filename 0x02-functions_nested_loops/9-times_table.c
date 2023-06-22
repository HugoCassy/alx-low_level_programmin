#include "main.h"
/**
 * times_table - Prints timestable
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int j, k;

	for (j = 0; j <= 9; j++)
	{
		for (k = 0; k <= 9; k++)
		{
			int result = k * j;

			printf("%d", result);
			if (k != 9)
			{
				_putchar (',');
				_putchar (' ');
			}
		}
		_putchar ('\n');
	}
}
