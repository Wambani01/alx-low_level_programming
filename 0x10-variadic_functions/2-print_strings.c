#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @n: number of strings
 * @...: optional arguments
 * @separator: string printed btn strings
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *c;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		c = va_arg(args, char *);

		if (c == NULL)
		{
			c = "(nil)";
		}
		printf("%s", c);
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
