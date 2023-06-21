#include "main.h"
/**
 *_islower - Checks for lowers
 *@r:  integer value that will be used to compare
 *Return: Always 0 (Success)
 */
int _isalpha(int r)
{
	if ((r >= 'a' && r <= 'z') || (r >= 'A' && r <= 'Z'))
	{
		return (1);
	}
	else 
	{
		return (0);
	}
	putchar('\n');
}
