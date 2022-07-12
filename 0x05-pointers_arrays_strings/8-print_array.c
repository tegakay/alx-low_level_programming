#include "main.h"
#include <stdio.h>

/**
 * print_array - print array
 * returns- the array
 * @a: pointer
 * @n: array count
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d ", a[i]);
		i++;
	}
}
