#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints numbers 1 - 10 with fun.
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	char *numbers;
	int i;

	numbers = "0123456789";

	for (i = 0; i < 10; i++)
	{
		putchar(numbers[i]);
	}
		putchar('\n');
		return (0);
}

