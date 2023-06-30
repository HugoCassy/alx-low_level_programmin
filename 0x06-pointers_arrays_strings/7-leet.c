#include "main.h"
/**
 * leet - replace chars with some int
 * @c: string array
 * Return: c;
 */
char *leet(char *c)
{
	int i;

	char *ptr = c;
	char chars[] = "AEOTL";
	char nums[] = "43071";

	while (*ptr != '\0')
	{
		for (i = 0; chars[i] != '\0'; i++)
		{
			if (*ptr == chars[i] || *ptr == chars[i] + 32)
			{
				*ptr = nums[i];
				break;
			}
		}
		ptr++;
	}
	return (c);
}

