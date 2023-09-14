#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @separator: string to print between
 * @n: number of strings passed
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;
	char* str;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char*);
		if (str == NULL)
			str = "(nil)";
		if (separator != NULL)
		{
			printf("%s", str);
			if (i != n - 1)
				printf("%s", separator);
		}
		else
		{
			printf("%s", str);
		}
		va_end(strings);
	}
	printf("\n");
}
