#include "main.h"
/**
 * main - prints the number of arguments passed to it
 * @argc: number of arguments
 * @argv: arguments themselves
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 1; argc > 0; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
