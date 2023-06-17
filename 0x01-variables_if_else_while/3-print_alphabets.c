#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints capital and small letters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char sL;
	char cL;

	for (sL = 'a'; sL <= 'z'; sL++)
	{
		putchar(sL);

		for (cL = 'A'; cL <= 'Z'; cL++)
		{
			putchar(cL);
		}
	}
	return (0);
}

