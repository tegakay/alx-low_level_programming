#include "variadic_functions.h"

/**
 * sum_them_all - function to sum
 * @n: numbers to sum
 * Return:sum of numbes
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int ap;
	int sum = 0;
	va_list args;

	va_start(args, n);
	if (n == 0)
		return (0);
	for (ap = 0; ap < n; ap++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
