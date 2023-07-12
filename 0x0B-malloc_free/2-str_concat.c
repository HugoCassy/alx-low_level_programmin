#include "main.h"
/**
 * _str_length - Calculates the length of a string.
 * @str: The string.
 * Return: The length of the string.
 */
size_t _str_length(const char *str)
{
	size_t len;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	return (len);
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
	size_t len1, len2, i, j;
	char *conca_t;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = _str_length(s1);
	len2 = _str_length(s2);
	conca_t = malloc((len1 + len2 + 1) * sizeof(char));

	if (conca_t == NULL)
	{
		return (NULL);
	}
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
