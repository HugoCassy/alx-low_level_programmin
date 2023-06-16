#include <stdio.h>
#include <rng-library.h>
/**
 * main - This prints a random number and state wheter it is possible ot not
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	rng_seed();
	int random_number = rng_rand();

	if (random_number < 0)
	{
		printf("%d : is negative", random_number);
	}
	else
	{
		print("%d : is positive", random_number);
	}
	return (0);
}
