#include "main.h"
/**
 * puts_half - prints the second half of a string
 * @str: pointer to char
 * Return: void
 */

void puts_half(char *str)
{
int i = 0;
int n = 0;
while (str[i] != '\0')
{
i++;
}
n = i / 2;
if ((i % 2 ) != 0)
{
n = (i -1) / 2;
}
for (n = 0; n <= i; n++)
{
_putchar(str[n]);
}
}
