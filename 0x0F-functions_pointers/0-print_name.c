#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints a name
 * @name: string literal
 * @f: pointer to a function
 * Return: null
 */
void print_name(char *name, void (*f)(char *name))
{
if (f != NULL)
{
f(name);
}
}
