#include "main.h"
/**
 * print_numbers - prints number from 0 to 9
 * Return: void
 */

void print_numbers(void)
{
int i = 0;
for (i = 0; i <= 9; i++)
{
_putchar(48 + i);
}
_putchar('\n');
}
