#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints alphabets except q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabets[26];

	alphabets[4] = '\0';
	alphabets[16] = '\0';

	for (int i = 0; i < 26; i++)
	{
		alphabets[i] = 'a' + i;
		putchar(alphabets[i]);
	}
	return (0);
}
