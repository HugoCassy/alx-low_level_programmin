#include "main.h"
char **strtow(char *str);
int count_words(char *str);
char **split_string(char *str, int num_words);
char *strdup_custom(char *str);

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 * Return: Pointer to an array of strings (words), or NULL if failed.
 */
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
	int num_words = 0;
	int is_word = 0;

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
 * @str: The string to split.
 * @num_words: The number of words in the string.
 * Return: The array of split words.
 */
char **split_string(char *str, int num_words)
{
	int i, j;
	char **words, *token;

	words = malloc((num_words + 1) * sizeof(char *));

	if (words == NULL)
		return (NULL);

	token = strtok(str, " ");

	while (token != NULL)
	{
		words[i] = strdup_custom(token);

		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}
		i++;
		token = strtok(NULL, " ");
	}

	words[num_words] = NULL;

	return (words);
}
/**
 * strdup_custom - Duplicates a string.
 * @str: The string to duplicate.
 * Return: The duplicated string, or NULL if failed.
 */
char *strdup_custom(char *str)
{
	size_t len = strlen(str) + 1;
	char *duplicate = malloc(len * sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	return (memcpy(duplicate, str, len));
}
