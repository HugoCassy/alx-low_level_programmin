#include "main.h"
/**
 * swap_int - Swaps two numbers through their pointers
 * @a: Variable one
 * @b: Variable two
 *
 * Return - 0
 */
void swap_int(int *a, int *b)
{
	int _value_to_held = *a;
	*a = *b;
	*b = _value_to_be_held;
}

