#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to print between numbers
 * @n: number of integers passed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			printf("%d", va_arg(list, int));
			if (i != n-1)
				printf("%s", separator);
		}
		else
			printf("%d", va_arg(list, int));
	}
	va_end(list);
	printf("\n");
}
