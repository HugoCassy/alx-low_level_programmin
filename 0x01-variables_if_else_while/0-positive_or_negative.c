#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - This prints a random number and state wheter it is possible ot not
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int random_number;
	srand(time(NULL));
	random_number = rand();

	if (random_number < 0)
	{
		printf("%d : is negative", random_number);
	}
	else
	{
		printf("%d : is positive", random_number);
	}
	return (0);
}
