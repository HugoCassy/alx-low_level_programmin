#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints 1 to 100
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
		putchar('9');
	return (0);
}
