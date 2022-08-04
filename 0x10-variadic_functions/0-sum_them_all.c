#include "variadic_functions.h"

/**
 * sum_them_all - function to sum
 * @n: numbers to sum
 * Return:sum of numbes
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int ar;
	int sum = 0;

	va_list args;

	va_start(args, n);
	if(n == 0)
		return (0);
	for (ar = 0; ar < n; ar++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
