#include "main.h"

/**
 * rev_string - print a string in reverse
 * returns - string in reverse
 */

void rev_string(char *s)
{
	int p;
	int i;

	p = _strlen(s);
	
	for(i = p; s[i] > 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
