#include "function_pointers.h"

/**
 * array_iterator - a function to print character..
 * @array: array to print
 * @size: is the size of the array
 * @action:  is a pointer to the function you need to use
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
	}
}
