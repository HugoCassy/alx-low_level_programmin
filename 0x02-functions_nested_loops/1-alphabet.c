#include "main.h"
/*
 * main - prints something to the screen
 * @print_function - Loops and prints letters
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}

