#include "main.h"
/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The argument count.
 * @av: The argument vector.
 * Return: On success, returns a pointer to the concatenated string.
 * On failure or if ac is 0 or av is NULL, returns NULL.
 */
char *argstostr(int ac, char **av)
{
	int total_length, i, j, index, k, l;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);

	total_length = 0;

	for (i = 0; i < ac; i++)
	{
		j = 0;

		while (av[i][j] != '\0')
		{
			total_length++;
			j++;
		}
		total_length++;
	}

	result = malloc((total_length + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);

	index = 0;

	for (k = 0; k < ac; k++)
	{
		l = 0;

		while (av[k][l] != '\0')
		{
			result[index++] = av[k][l++];
		}
		result[index++] = '\n';
	}

	result[index] = '\0';

	return (result);
}
