#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - prints string followed by new line
 * @separator: string
 * @n: const unsigned int
 * Return: null
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list arg;
unsigned int i;
if (separator == NULL)
{
return;
}
va_start(arg, n);
for (i = 0; i < n; i++)
{
char *word = va_arg(arg, char *);
if (word == NULL)
{
printf("nil");
}
else
{
printf("%s", word);
}
if (i != (n - 1))
printf("%s", separator);
}
va_end(arg);
printf("\n");
}
