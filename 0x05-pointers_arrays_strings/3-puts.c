#include "main.h"
/**
 * _puts - Prints something to the stdout
 * @c: pointer variable
 *
 * Return: 0;
 */
void _puts(char *str)
{
	int i;

	int len = _strlen(str);

	for (i = 0; i < len; i++)
	{
		putchar (str[i]);
	}
}



