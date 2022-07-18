#include "main.h"

/**
 * _strspn - checks the length of maching values
 * @s: first string
 * @accept: secnd t check
 * Return: n of bytes found
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int val = 0;

	while (s[i] >= '\0')
	{
	for (j = 0;  accept[j] >= '\0'; j++)
	{
		if (s[i] == accept[i])
			val++;
		break;
	}
		i++;
	}
	return (val);
}

