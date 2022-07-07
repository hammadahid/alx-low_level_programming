#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string literal
 * n: const insigned int
 * Return: null
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list arg;
if (separator == NULL || n == 0)
{
return;
}
va_start(arg, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(arg, int));
printf("%s", separator);
}
va_end(arg);
printf("\n");
}
