#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the alphabets in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha[];
	int i;

	alpha = "abcdefghijklmonpqrstuvwxyz";

	for (i = 0; i <= 26; i--)
	{
		putchar(alpha[i]);
	}
	return (0);
}
