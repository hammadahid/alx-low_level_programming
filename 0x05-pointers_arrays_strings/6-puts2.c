#include "main.h"
/**
 * puts2 - prints every other character of a string starting from the first
 * @str: pointer to string
 * Return: void
 */

void puts2(char *str)
{
int i = 0;
int count = 0;
while (str[count] != '\0')
{
count += 1;
}
while (i < count)
{
_putchar(str[i]);
i = i + 2;
}
_putchar('\n');
}
