#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Prints combos for numbers
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int j, k;

	for (j = 0; j <= 9; j++)
	{

		for (k = 0; k <= 9; k++)
		{
			putchar(j + '0');
			putchar(i + '0');
		}
			putchar(',');
			putchar(' ');
	}
	putchar('\n');
	return (0);
}

