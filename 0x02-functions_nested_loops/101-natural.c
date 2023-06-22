#include "main.h"
/**
 * main - multiple of 3 of 5 below 1024
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	int sum = 0;
	int j;

	for (j = 1; j < 1024 ; j++)
	{
		if (j % 3 == 0 || j % 5 == 0)
		{
			sum = sum + 1;
		}

		printf("%d", sum);
	}
}



