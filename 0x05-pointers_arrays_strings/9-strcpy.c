#include "main.h"
/**
 * *_strcpy - copies value to dest
 * @dest: buffer variable
 * @src: pointer variable
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(src + 1) != '\0')
	{
		a++;
	}
	for (b = 0; b < a; b++)
	{
		dest[b] = src[b];
	}
	dest[b] = '\0';
	return (dest);
}
