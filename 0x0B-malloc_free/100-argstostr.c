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
	if (ac == 0 || av == NULL)
		return (NULL);

	int total_length = 0;
	char *result;

	for (int i = 0; i < ac; i++)
	{
		int j = 0;

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

	int index = 0;

	for (int i = 0; i < ac; i++)
	{
		int j = 0;

		while (av[i][j] != '\0')
		{
			result[index++] = av[i][j++];
		}
		result[index++] = '\n';
	}

	result[index] = '\0';

	return (result);
}
