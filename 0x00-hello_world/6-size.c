#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	char b;
	long int c;
	long long int d;
	float e;
	printf("Size of a char: %lu %s\n", (unsigned long)sizeof(b), "byte(s)");
	printf("Size of an int: %lu %s\n", (unsigned long)sizeof(a), "byte(s)");
	printf("Size of a long int: %lu %s\n", (unsigned long)sizeof(c), "byte(s)");
	printf("Size of a long long int: %lu %s\n", (unsigned long)sizeof(d), "byte(s)");
	printf("Size of a float: %lu %s\n", (unsigned long)sizeof(e), "byte(s)");
	return (0);
}

