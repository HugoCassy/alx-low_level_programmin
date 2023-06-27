#include "main.h"
/**
 * puts_half - prints the second half of a string
 *
 * @str: variable
 * Return: 0
 */
void puts_half(char *str)
{

	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 != 0)
	{
		int n = (len - 1) / 2;

		for (int i = n; i < len; i++)
		{
			_putchar (str[i]);
		}
	}
	else
	{
		int n = (len + 1) / 2;

		for (int i = n; i < len; i++)
		{
			_putchar (str[i]);
		}
	}
	_putchar ('\n');
}
