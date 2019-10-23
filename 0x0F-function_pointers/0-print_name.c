#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: name send for parameter
 * @f: function pointer for parameter
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
