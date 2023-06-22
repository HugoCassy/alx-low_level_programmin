#include "main.h"
/**
 *print_to_98 - Print numbers from 1 to 98
 *@n: value to hold digits;
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d\n", n);
	}
	else if (n < 98)
	{
		for (n = n; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
			{
				putchar (',');
				putchar (' ');
			}
		}
		putchar('\n');
	}
	else if (n > 98)
	{
		for (n = n; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
			{
				putchar (',');
				putchar (' ');
			}
		}
		putchar ('\n');
	}



}

