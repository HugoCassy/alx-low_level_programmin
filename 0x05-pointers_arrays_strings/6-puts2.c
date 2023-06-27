#include "main.h"
/**
 * puts2 - print and skip the odd
 *
 * @str: variable
 * Return: 0
 */
void puts2(char *str)
{
	int i;
	int len;

	while (str[len])
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		if (!(i % 2 == 0))
		{
			continue;
		}
	}
	_putchar (str[i]);
}
