#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %lu.%s%s\n", (unsigned long)sizeof(char),"byte(s)");
	printf("Size of an int: %lu.%s%s\n", (unsigned long)sizeof(int),"byte(s)");
	printf("Size of a long int: %lu.%s%s\n", (unsigned long)sizeof(long int),"byte(s)");
	printf("Size of a long long int: %lu.%s%s\n", (unsigned long)sizeof(long long int),"byte(s)");
	printf("Size of a float: %lu.%s%s\n", (unsigned long)sizeof(float),"byte(s)");
	return (0);
}

