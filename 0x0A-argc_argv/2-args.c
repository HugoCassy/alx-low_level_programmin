#include "main.h"
/**
 * main - prints all arguments
 * @argc: length of the arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
		putchar ('\n');
	}
	return (0);
}
