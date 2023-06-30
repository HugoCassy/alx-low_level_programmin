#include "main.h"
/**
 * cap_string - capitalize string
 * @c: string
 * Return: c
 */
char *cap_string(char *c)
{
	int i = 0;
	int letter = 1;

	while (c[i] != '\0')
	{
		if (letter && (c[i] >= 'a' && c[i] <= 'z'))
		{
			c[i] -= 32;
		}
		else if (c[i] == ' ' || c[i] == '\t' || c[i] == '\n'
				|| c[i] == ',' || c[i] == ';' ||
				c[i] == '.' || c[i] == '!' || c[i] == '?'
				|| c[i] == '"' || c[i] == '(' ||
				c[i] == ')' || c[i] == '{' || c[i] == '}')
		{
			letter = 1;
		}
		else
		{
			letter = 0;
		}
		i++;
	}
	return (c);
}

