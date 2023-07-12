#include "main.h"
/**
 * create_array - Creates an array of characters and initializes it with a specific character.
 * @size: The size of the array.
 * @c: The character to initialize the array with.
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	arr = (char *)malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
