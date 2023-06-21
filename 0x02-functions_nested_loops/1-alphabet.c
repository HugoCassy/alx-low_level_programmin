#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/*
 * main - prints something to the screen
 * @ print_function - Loops and prints letters
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{

	for (alphabet = 'a'; alphabet <= 'z'; alphabets++)
	{
		putchar(alphabets);
	}
	putchar('\n');
}

