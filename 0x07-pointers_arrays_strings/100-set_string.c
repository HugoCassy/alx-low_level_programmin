#include "main.h"
/**
 * set_string - sets a pointer to a char
 * @s:  string
 * @to: string to get from
 */
void set_string(char **s, char *to) 
{
	if (*s != NULL)
	{
		char *temp = *s;
		while (*temp != '\0')
		{
			*temp = '\0';
			temp++;
		}
	}
	int length = 0;
	char *temp = to;
	while (*temp != '\0')
	{
		length++;
		temp++;
	}
	*s = (char *) malloc((length + 1) * sizeof(char));
	char *dest = *s;
	temp = to;
	while (*temp != '\0') {
			*dest = *temp;
			dest++;
			temp++;
		}
		*dest = '\0';
	}
