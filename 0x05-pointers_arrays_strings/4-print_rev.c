#include "main.h"
/**
 * print_rev - prints a string in reverse with new line
 * @s: pointer to char
 * Return: void
 */

void print_rev(char *s)
{
int i = 0;
while(s[i] != '\0')
{
i++;
}
for (; i > 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
