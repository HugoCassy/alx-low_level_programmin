#include "main.h"
/**
 * malloc_checked - allocates memory
 * @b: digit to allocate memory to
 * Return: p
 */
void *malloc_checked(unsigned int b)
{
	void *p = NULL;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	else
	{
		return (p);
	}
}



