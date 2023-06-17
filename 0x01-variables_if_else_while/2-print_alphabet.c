#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints all the alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		putchar(alphabets);
	}
		putchar('\n');
	return (0);
}
