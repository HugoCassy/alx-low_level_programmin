#include "main.h"
/**
 * *_strpbrk - searches for a string of any byte
 * @s: first occurnace
 * @accept: string
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	char *p = "accept";

	while (*s != '\0')
	{
		for (p = accept; *p != '\0'; p++)
		{
			if (*s == *p)
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
