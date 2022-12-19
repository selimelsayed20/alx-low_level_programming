#include "main.h"

/**
 * reset_to_98 - takes a pointer to a parameter and updates its value.
 * @a: first integer.
 * @b: second integer.
 * Return: no return.
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
