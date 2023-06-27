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

	while (str[i] != '\0')
	{
		i++;
	}

	for (i = len - 1; i < str[i]; i++)
	{
		_putchar (str[i]);
	}
}
