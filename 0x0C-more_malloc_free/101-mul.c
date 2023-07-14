#include "main.h"
/**
 * main - multiplies 2 positive numbers
 * @argc: length of arguents
 * @argv: array of cgaracters
 * Return: erro stas it failed
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		if (is_number(argv[1]) && is_number(argv[2]))
		{
			printf("%d\n", num1 * num2);
		}
		else
		{
			printf("Error\n");
			exit(98);
		}
	}
}
/**
 * is_digit - check if value is a digit
 * @c: value
 * Return: c
 */
int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}
/**
* is_number - Checks if a string represents a valid number
* @str: The string to check
* Return: 1 if the string is a valid number, 0 otherwise
 */
int is_number(const char *str)
{
	if (*str == '\0')
		return (0);

	while (*str)
	{
		if (!is_digit(*str))
			return (0);
		str++;
	}
	return (1);
}

