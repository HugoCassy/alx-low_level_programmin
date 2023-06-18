#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Prints 3 digits combos
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j, k, l;

	for (j = 0; j <= 9; j++)
	{
		for (k = j + 1; k <= 9; k++)
		{
			for (l = k + 1; l <= 9; l++)
			{
				if ((j != k) || (j != l) || (k != j) || (k != l) || (l != j) || (l != k))
				{
					putchar(j + '0');
					putchar(k + '0');
					putchar(l + '0');
					if ((j != 7) && (k != 8) && (j != 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

