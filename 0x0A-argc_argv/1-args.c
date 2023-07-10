#include "main.h"
/**
 * main - prints the number of arguments passed to it
 * @argc: number of arguments
 * @argv: arguments themselves
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int len = argc;

	int i;

	for (i = 1; argv[i] != NULL; i++)
	{
		len = len - 1;
	}

	printf("%d\n", len);
	return (0);
}
