#include "main.h"

/**
 * factorial - return factorial of a number
 * @n: the number
 * Return: the factorial
 */

int factorial(int n)
{
	int i;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		i = 1;
		return (i);
	}
	i = n * factorial(n - 1);
	return (i);
}
