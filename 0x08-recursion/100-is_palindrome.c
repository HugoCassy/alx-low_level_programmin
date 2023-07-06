#include "main.h"

/**
 * _strlen - Calculate the length of a string recursively
 *  @s: The input string
 *Return: The length of the string
*/
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen(s + 1));
}
/**
 * c_palindrome - Check if a string is a palindrome recursively
 * @s: The input string
 * @st: The starting index of the current comparison
 * @e: The ending index of the current comparison
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int c_palindrome(char *s, int st, int e)
{
	if (st >= e)
	{
		return (1);
	}
	if (s[st] != s[e])
	{
		return (0);
	}
	return (c_palindrome(s, st + 1, e - 1));
}
/**
 * is_palindrome - Check if a string is a palindrome
 * @s: The input string
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (c_palindrome(s, 0, len - 1));
}
