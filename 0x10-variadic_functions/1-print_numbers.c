#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers -  Prints numbers, followed by a new line.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 * @separator: The string to be printed between numbers.
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
		if (n == i + 1)
		{
			break;
		}
		printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}
