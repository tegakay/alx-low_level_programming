#include "main.h"



/**
 * _memcpy - copy x bytes from pointer src to pointer desc
 * @dest: destination
 * @src: source
 * @n: no
 * Return: a pointer to the dest
 **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
