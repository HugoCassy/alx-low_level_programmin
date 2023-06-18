#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Prints all combination of numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first, second;

	for (first = 0; first <= 9; first++)
	{
		for (second = first + 1; second <= 9; second++)
		{
			if (first != second)
			{
				putchar(first + '0');
				putchar(second + '0');

				if (first != 8 || second != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
