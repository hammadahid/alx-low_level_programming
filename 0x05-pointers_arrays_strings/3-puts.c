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
_putchar(str[i]);
if (str[i] == '\0'){
break;
}
i++;
}
_putchar('\n');
}
