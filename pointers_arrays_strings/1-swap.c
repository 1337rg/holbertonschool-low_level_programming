#include "main.h"

/**
 * swap_int - function thats swaps the values of two intergers.
 * @a: fisrt int
 * @b: second int
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;

	*a = *b;

	*b = c;
}
