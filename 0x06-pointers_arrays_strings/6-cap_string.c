#include "main.h"
/**
 * cap_string - capitalize string
 * @c: string
 * Return: c
 */
char *cap_string(char *c)
{
	int i = 0;
	int first_letter = 1;

	while (c[i] != '\0')
	{
		if (first_letter && c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] = c[i] - ('a' - 'A');
		}
		else if (c[i] == ' ' || c[i] == '\t' || c[i] == '\n')
		{
			first_letter = 1;
		}
		else if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] = c[i] - ('a' - 'A');
			first_letter = 0;
		}
		i++;
	}
	return (c);
}

