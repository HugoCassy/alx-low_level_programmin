#include "main.h"
/**
 * print_diagsums - print diagonals
 * @a: array size
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int first_diag = 0;
	int second_diag = 0;

	for (int i = 0; i < size; i++)
	{
		first_diag += *(a + i * size + i);
		second_diag += *(a + i * size + (size - 1 - i));
	}
	printf("%d", first_diag);
	printf("%d", second_diag);
}
