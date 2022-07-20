#include "main.h"

/**
 * _pow_recursion - returns the ^
 * @x: first var
 * @y: second var
 * Return: the power of x to y
 */

int _pow_recursion(int x, int y)
{
	int j;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	j = x * (_pow_recursion(x, (y - 1)));
	return (j);
}
