#include <stdio.h>

/**
 * main - Prints all base 16 digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char a = 48;
int i = 97;
for ( ; a < 58 ; a++)
{
putchar(a);
}
for ( ; i <= 102 ; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
