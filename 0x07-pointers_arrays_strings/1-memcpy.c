#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: destination variable
 * @src: source folder
 * @n: mem size
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
