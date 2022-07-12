#include "main.h"

/**
 * rev_string - print a string in reverse
 * returns - string in reverse
 * @s: input param
 */

void rev_string(char *s)
{
	int i = 0, len = 0;

	char tmpe;

	while (s[i++])
		len++;
	for (i = len - 1; i >= len / 2; i--)
	{
		tmpe = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmpe;
	}
}
