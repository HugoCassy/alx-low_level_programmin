#include "main.h"
/**
 * main - Prints 1 to 100, but replaces a
 * multiple of 3 with Fizz, a multiple of 
 * 5 with Buzz and a multiple common to
 * 3 and 5 , FizzBuzz
 *
 * Return: 0
 */
int main(void)
{
	int three;
	int five;
	int three_five;
	int i;

	for (i = 0; i <= 100; i++)
	{
		printf("%d", i);

		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
	}
}
