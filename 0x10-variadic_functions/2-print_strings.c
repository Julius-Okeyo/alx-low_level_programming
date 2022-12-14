#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings separated by separator
 * @separator: separator string
 * @n: number of string items to be printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	char *c;
	va_list arg;

	if (n != 0)
	{
		va_start(arg, n);
		for (a = 0; a < n; a++)
		{
			c = va_arg(arg, char *);
			if (c == NULL)
				printf("(nil)");
			else
				printf("%s", c);
			if (separator != NULL && a != (n - 1))
				printf("%s", separator);
		}
		va_end(arg);
	}
	printf("\n");
}
