#include "main.h"
/**
 * _puts - Prints something to the stdout
 * @str: pointer variable
 *
 * Return: 0;
 */
void _puts(char *str)
{
	int len = 0;

	int i;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		_putchar (str[i]);
	}
	_putchar ('\n');
}
