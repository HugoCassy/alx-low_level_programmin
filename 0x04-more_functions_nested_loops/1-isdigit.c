#include "main.h"
/**
 * _isdigit - chackes if a value is a digit
 * @c: value to chack;
 * Return: c
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
