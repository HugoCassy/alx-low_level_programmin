#include "main.h"
/**
 * print_alphabet - prints something to the screen
 * Return: Always 0 (Success)
 */
int print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
	return (0);
}
