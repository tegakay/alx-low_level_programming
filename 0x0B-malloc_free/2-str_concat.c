#include "main.h"

/**
 * str_concat - concat 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: concat string
 */

char *str_concat(char *s1, char *s2)
{
	int a, b, c, d, q, e;
	char *p;

	e = 0;
	if (s1 == NULL)
	{
		a = 0;
	}
	else
	{
		for (a = 0; s1[a]; a++)
		;
	}
	if (s2 == NULL)
	{
		b = 0;
	}
	else
	{
		for (b = 0; s2[b]; b++)
		;
	}
	q = a + b + 1;
	p = malloc(q * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (c = 0; c <= a; c++)
		p[c] = s1[c];
	for (d = 0; d <= b; d++)
	{
		p[d + e] = s2[e];
	}
	p[a + b] = '\0';
	return (p);
}
