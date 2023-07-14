#include "main.h"
/**
 * _calloc - Allocates memory for an array and initializes to zero
 * @nmemb: Number of elements in the array
 * @size: Size of each element in bytes
 * Return: Pointer to the allocated memory, or NULL if allocation fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	unsigned int total;
	unsigned char *p;

	total = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(total);

	if (ptr == NULL)
		return (NULL);

	/* Set the allocated memory to zero */
	p = (unsigned char *)ptr;

	for (i = 0; i < total; i++)
		p[i] = 0;

	return (ptr);
}
