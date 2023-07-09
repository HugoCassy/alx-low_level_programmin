#include "main.h"
/**
 * main - prints that prints its name then a newline
 * @agrc: number of arguments passed
 * @agrv: Array of the arguments passed.
 * Return: 0;
 */
int main(int agrc, char *agrv[])
{
	int i;
	
	for (i = 0; i < agrc; i++)
	{
		printf("%s", agrv[0]);
	}
	putchar ('\n');
	return (0);
}
