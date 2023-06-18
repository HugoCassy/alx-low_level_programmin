#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Prints alphabets except q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	char alphabets[] = "abcdfghijklmnoprstuvwxyz";
	int length = strlen(alphabets);

	for (i = 0; i < length; i++)
	{
		putchar(alphabets[i]);
	}
		putchar('\n');
	return (0);
}
