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
	unsigned int val = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				val++;
				break;
			}
		}
	if (accept[j] == '\0')
	{
		break;
	}
	}
	return (val);
}
