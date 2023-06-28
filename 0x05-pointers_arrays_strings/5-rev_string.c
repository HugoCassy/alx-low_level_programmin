#include "main.h"
/**
 * rev_string - Reverses a string
 * @s: pointer variable
 *
 * Return: s;
 */
int rev_string(char *s)
{
	int i;
	int len;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		return (s[i]);
	}
}
