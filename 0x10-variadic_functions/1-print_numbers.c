#include <stdio.h>
#include <stddef.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints n numbers separated by separator
 * @separator: character printed between the numbers
 * @n: number of unnamed arguments passed to print_numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg, int));
		if (separator != NULL)
			printf("%s", *separator);
	}
	va_end(arg);
}
