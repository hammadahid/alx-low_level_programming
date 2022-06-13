#include "main.h"
/**
 * _puts - prints a string and new line
 * @str: pointer to char
 * Return: void
 */

void _puts(char *str)
{
int i = 0;
while (1)
{
if (str[i] == '\0')
{
break;
}
_putchar(str[i]);
i++;
}
_putchar('\n');
}
