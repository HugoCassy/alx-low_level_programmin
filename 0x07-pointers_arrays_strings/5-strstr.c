#include "main.h"
/**
 * *_strstr -locates a substring
 * @haystack: the main string
 * @needle: the string to find
 * Return: needle
 */
char *_strstr(char *haystack, char *needle)
{
	char *hay;
	char *need;

	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		hay = haystack;
		need = needle;

		while (*need != '\0' && *hay == *need)
		{
			hay++;
			need++;
		}
		if (*need == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
