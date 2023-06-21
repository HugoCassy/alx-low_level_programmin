#include "main.h"
/**
 * main - Prints puchar to the console
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *words = "_putchar";
	int length = strlen(words);

	for (int i = 0; i < length; i++)
	{
		putchar(words[i]);
	}
	putchar('\n');
	return (0);
}
