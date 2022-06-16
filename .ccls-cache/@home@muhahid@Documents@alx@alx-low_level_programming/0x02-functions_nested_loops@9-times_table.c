#include "main.h"
/**
 * main: times_table(void)
 * Description: prints the times table up to 9
 * Return: void
 */

void times_tables(void)
{
int i = 0;
int j = 0;
int sum = 0;
for ( ; i <= 9; i++)
{
for ( ; j <= 9; j++)
{
sum = i * j;
if (sum <= 9)
{
_putchar(48 + sum);
_putchar(',');
}
else
{
_putchar(48 + (sum / 10));
_putchar(48 + (sum % 10));
}
}
j = 0;
_putchar('\n');
}
}
