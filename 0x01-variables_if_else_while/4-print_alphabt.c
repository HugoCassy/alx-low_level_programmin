#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Prints alphabets except q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabets[] = "abcdfghijklmnoprstuvwxyz";
	int length = strlen(alphabets);

	for (int i = 0; i < length; i++)
	{
		putchar(alphabets[i]);
	}
		putchar('\n');
	return (0);
}
