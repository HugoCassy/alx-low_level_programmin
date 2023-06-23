#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: holds the size of the shape
 * Return: 0
 */
void print_triangle(int size)
{
	int a;
	int b;

	if(size > 0)
	{
		for (a = 0; a <= size; a++)
		{
			for (b = 0; b <= size; b++)
			{
				_putchar (' ');
			}
			_putchar ('#');
			_putchar ('\n');
		}
	}
}

			
