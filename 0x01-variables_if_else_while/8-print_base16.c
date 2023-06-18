#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Prints hexa numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char numbers;
	char letters;

	for (numbers = 0; numbers < 10; numbers++)
	{
		putchar((char)numbers);
	}
	for (letters = 'A'; letters >= 'F'; letters++)
	{
		putchar(letters);
	}
	putchar('\n');
	return (0);
}
