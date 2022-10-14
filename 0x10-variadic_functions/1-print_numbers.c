#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers
 * @separator: character printed between numbers
 * @n: number of integers
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int x;
	va_list args;

	va_start(args, n)

	for (i = 0; i < n; i++)
	{
		x = va_args(args, int)
		printf("%d", x);
		if (separator != NULL && n != n - 1)
		{
			printf("%c", separator)
		}
	}
	va_end(args);
	printf("\n");
}
