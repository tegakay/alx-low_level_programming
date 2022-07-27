#include "main.h"

/**
 * create_array - creates an array
 * @size: size of the array
 * @c:array characters
 * Return: pointer t he array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int y;

	char *i;

	if (size == 0)
	return (NULL);
	i = malloc(size * sizeof(char));
	if (i == NULL)
	{
		return (NULL);
	}
	for (y = 0; y < size; y++)
	{
		i[y] = c;
	}
	return (i);
}
