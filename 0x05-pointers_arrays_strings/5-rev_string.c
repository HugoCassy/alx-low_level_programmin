#include "main.h"
/**
 * rev_string - Reverses a string
 * @s: pointer variable
 *
 * Return: 0;
 */
void rev_string(char *s)
{
	int i;
	int len;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		_putchar (s[i]);
	}
	_putchar ('\n');
	for (i = len - 1; i >= 0; i--)
	{
		_putchar (s[i]);
	}
	_putchar ('\n');
}

