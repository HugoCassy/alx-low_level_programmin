#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Selects the last digit of a number and decides if it fits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

	if (l > 5)
	{
		printf("Last digit of %d is %d and is greater that 5\n", n, l);
	}
	else if (l == 0)
	{
		printf("Last digit of %d is %d and is zero\n", n, l);
	}
	else if (l < 6 && l != 0)
	{
		printf("Last digit of %d id %d and is greater 6 but not zero\n", n, l);
	}
	return (0);
}

