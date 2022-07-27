#include "main.h"

/**
 * _strdup - dyuplicate a string
 * @str: the string
 */

char *_strdup(char *str)
{
	int n,j;

	char *i;

	for (n = 0; str[n] != '\0'; n++)
	{
	};
	i = malloc (n * sizeof(char));
	if (i == NULL)
		return (NULL);
	for (j = 0; j <= n; j++)
		i[n] = str[n];
	return (i);
}
