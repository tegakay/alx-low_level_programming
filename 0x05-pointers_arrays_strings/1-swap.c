#include "main.h"

/**
 * swap_int - takes in 2 values and swap
 * @a :variable
 * @b :variable
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
