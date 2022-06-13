#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: pointers to string
 * Return: void
 */

void rev_string(char *s)
{
int i = 0;
while(s[i] != '\0')
{
_putchar(s[i]);
i++;
}
_putchar('\n');
for (; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
