#include "main.h"
/**
 * puts - prints a string
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
}
