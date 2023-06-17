#include <stdio.h>
#include <stdlib.h>
/**
 * main - to print numbers 1 - 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numbers;
	int i;

	numbers = 10;

	for (i = 0; i < numbers; i++)
	{
		printf("%d", i);
	}
	printf("\n");
	return (0);
}

