#include "main.h"
/**
 * main - prints the number of arguments passed to it
 * @argc: number of arguments
 * @argv: arguments themselves
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	for (i = 0; argv[i] != NULL; i++)
	{
		sum += 1;
	}

	printf("%d\n", sum);
	return (0);
}
