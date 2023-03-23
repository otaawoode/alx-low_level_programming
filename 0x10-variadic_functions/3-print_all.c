#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints all
 * @format: formats of arg
 */
void print_all(const char * const format, ...)
{
	types_t types[] = {
	{'c', print_char},
	{'i', print_int},
	{'f', print_float},
	{'s', print_string},
	{'\0', NULL}
	};
	va_list args;
	char *sep1 = "", *sep2 = ", ";
	int count1 = 0, count2 = 0;

	va_start(args, format);
	while (format !=  NULL && format[count1] != '\0')
	{
		count2 = 0;
		while (types[count2].z != '\0')
		{
			if (format[count1] == types[count2].z)
			{
				printf("%s", sep1);
				types[count2].f(args);
				sep1 = sep2;
			}
			count2++;
		}
		count1++;
	}
	printf("\n");
	va_end(args);
}
