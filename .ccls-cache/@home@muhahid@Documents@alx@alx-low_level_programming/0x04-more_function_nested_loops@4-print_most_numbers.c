#include "main.h"
/**
 * print_most_numbers - print the number 0 to 9
 * Return: void
 */

void print_most_numbers(void)
{
int i = 0;
for (i = 0; i <= 9; i++)
{
if (i != 2 || i != 4)
{
_putchar(48 + i);
}
}
}
