#include "main.h"
/**
 * *_strchr - locates the first apperance of a string
 * @s: array of letters
 * @c: letter to be located
 * Return: s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
