#include "main.h"
/**
 * array_range - Creates an array of integers from min to max
 * @min: The minimum value
 * @max: The maximum value
 * Return: Pointer to the newly created array,
 * or NULL if min > max or malloc fails
 */
int *array_range(int min, int max)
{
	int *ar;
	int size_array, i;

	if (min > max)
		return (NULL);

	size_array = max - min + 1;
	ar = malloc(size_array * sizeof(int));

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size_array; i++)
		ar[i] = min++;

	return (ar);
}
