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
if ((i % 2) != 0)
{
n = (i - 1) / 2;
n = n - 1;
}
else
{
n = i / 2;
}
for (n = n; n < i; n++)
{
_putchar(str[n]);
}
_putchar('\n');
}
