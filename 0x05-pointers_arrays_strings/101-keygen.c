#include "main.h"
#include <time.h>
/**
 *
 * main - Generates a random valid password for 101-crackme
 *
 * Return: Always 0
 * */
int main(void)
{
	char p_word[84];
	int i, summation, diff_t;

	srand(time(NULL));

	for (i = 0, summation = 0; summation < 2772 - 122; i++)
	{
		p_word[i] = rand() % 94 + 33;
		summation += p_word[i];
	}

	diff_t = summation - 2772 + 122;
	p_word[i] = diff_t;

	printf("%s", p_word);

	return (0);
}
