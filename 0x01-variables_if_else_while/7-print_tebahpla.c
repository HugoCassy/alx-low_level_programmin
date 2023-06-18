#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the alphabets in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
		putchar('\n');
	return (0);
}
