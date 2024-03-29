#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - function that prints a name
 * @name: name to print
 * @f: function to print name
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
