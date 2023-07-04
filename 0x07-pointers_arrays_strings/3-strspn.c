#include "main.h"
/**
 *  _strspn - gets the length of a prefix
 * @s: main long string
 * @accept:substring
 * Return: s
 */
unsigned int _strspn(char *s, char *accept)
{
	int len = 0;

	int seen;
	char *p = "accept";

	while (*s != '\0')
	{

		seen = 0;

		for (p = accept; *p != '\0'; p++)
		{
			if (*s == *p)
			{
				seen = 1;

				break;
			}
		}
		if (seen == 0)
		{
			return (len);
		}

		len++;
		s++;
	}
	return (len);
}
