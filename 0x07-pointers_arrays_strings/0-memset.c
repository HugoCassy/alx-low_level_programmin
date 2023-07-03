#include "main.h"
/**
 * *_memset- fills a buffer with memory
 * @s: pointer to the memory block
 * @b: value to be set
 * @n: The number of bytes to be filled
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
