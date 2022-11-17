#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a anme based on the passed function
 * @name: name to be printed
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}