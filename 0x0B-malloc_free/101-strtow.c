#include "main.h"
int count_words(char *str);
char **split_string(char *str, int num_words, int total_length);
int count_words(char *str);
char **split_string(char *str, int num_words);

/**
 *  * strtow - Splits a string into words.
 * @str: The string to split.
 * Return: On success, returns a pointer to an array of strings (words).
 *      *         On failure or if str is NULL or empty, returns NULL.
 *       */
char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
		return (NULL);

	int num_words = count_words(str);
	if (num_words == 0)
		return (NULL);

	return (split_string(str, num_words));
}

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to count words in.
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
	int num;

	int is_word;

	num_words = 0;
	is_word = 0;

	while (*str)
	{
		if (*str != ' ')
		{
			if (!is_word)
			{
				is_word = 1;
				num_words++;
			}
		}
		else
		{
			is_word = 0;
		}

		str++;
	}

	return (num_words);
}

/**
 * split_string - Splits a string into words.
 * @str The string to split.
 * @num_words: The number of words in the string.
 * Return: The array of split words.
 *       */
char **split_string(char *str, int num_words)
{
	int i, j;
	char **token, **words;

	chamalloc((num_words + 1) * sizeof(char *));

	if (words == NULL)
		return (NULL);

	token = strtok(str, " ");

	while (token != NULL)
	{
		words[i] = malloc((strlen(token) + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}

		strcpy(words[i], token);
		i++;

		token = strtok(NULL, " ");
	}

	words[num_words] = NULL;

	return (words);
}
