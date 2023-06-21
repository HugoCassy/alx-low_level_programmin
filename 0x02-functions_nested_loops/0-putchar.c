#include "main.h"
/**
 * main - Prints puchar to the console
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	char words[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(words[i]);
	}
	_putchar('\n');
	return (0);
}
