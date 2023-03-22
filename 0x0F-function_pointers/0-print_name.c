#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints name using pointer to funciton
 * @name: string to add
 * @f: pointer to print upp or non upp func
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
