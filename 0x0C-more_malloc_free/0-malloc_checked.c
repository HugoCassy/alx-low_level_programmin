#include "main.h"
/**
 * malloc_checked - allocates memory
 * @b: digit to allocate memory to
 * Return: b
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}
