#include "main.h"
/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 * Return: On success, returns a pointer to the duplicated string.
 * On failure or if str is NULL, returns NULL.
 */
char *_strdup(char *str)
{
	char *dup;

	size_t i, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	dup = (char *)malloc((len + 1) * sizeof(char));

	if (dup == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		dup[i] = str[i];
	}
	dup[i] = '\0';
	return (dup);
}
