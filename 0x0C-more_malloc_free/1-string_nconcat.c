#include "main.h"
/**
 * string_nconcat - Concatenates two strings with given length
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes from s2 to concatenate
 * Return: Pointer to the newly allocated memory with the concatenated string
 * and null if fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int s1_len = 0;
	unsigned int s2_len = 0;
	unsigned int copy_len = 0;
	unsigned int result_len = 0;
	unsigned int k = 0, l = 0;

	if (s1 != NULL)
	{
		while (s1[s1_len] != '\0')
			s1_len++;
	}

	if (s2 != NULL)
	{
		while (s2[s2_len] != '\0')
			s2_len++;
	}

	copy_len = (n >= s2_len) ? s2_len : n;
	result_len = s1_len + copy_len;

	result = malloc((result_len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);

	for (k = 0; k < s1_len; k++)
		result[k] = s1[k];

	for (l = 0; l < copy_len; l++)
		result[k++] = s2[l];

	result[k] = '\0';

	return (result);
}
