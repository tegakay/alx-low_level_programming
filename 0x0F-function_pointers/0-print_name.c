#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - print a name
 * @name: the name
 * @f: function to use
 */

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
