#include "main.h"
/**
 * _str_length - Calculates the length of a string.
 * @str: The string.
 * Return: The length of the string.
 */
size_t _str_length(const char *str)
{
	size_t length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	return (length);
}

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * Return: On success, returns a pointer to the concatenated string.
 * On failure, returns NULL.
 */
char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size_t len1 = _str_length(s1);
	size_t len2 = _str_length(s2);
	char *conca_t;

	conca_t = malloc((len1 + len2 + 1) * sizeof(char));
	if (conca_t == NULL)
	{
		return (NULL);
	}

	size_t i, j;

	for (i = 0; i < len1; i++)
	{
		conca_t[i] = s1[i];
	}

	for (j = 0; j < len2; j++)
	{
		conca_t[i + j] = s2[j];
	}

	conca_t[i + j] = '\0';
	return (conca_t);
}
