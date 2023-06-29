#include "main.h"
/**
 * string_toupper - converts to uppercase
 * @c: variable
 * Return: c
 */
char *string_toupper(char *c)
{
	int len = 0;

	while (c[len] != '\0')
	{
		int i = 0;

		while (c[i] != '\0')
		{
			if (c[i] >= 'a' && c[i] <= 'z')
			{
				c[i] = c[i] - ('a' - 'A');
			}
			i++;
		}
	}
	return (c);
}
