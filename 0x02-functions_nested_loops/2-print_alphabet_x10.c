#include "main.h"
/**
 * print_alphabet_x10 - Prints the result
 *
 * Return: Always 0 (Success)
 */
int print_alphabet_x10(void)
{
	int a;

	int i = 0;

	while (i < 10)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
		i++;
	}
	return (0);
}
