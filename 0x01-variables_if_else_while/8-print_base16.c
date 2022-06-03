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
for ( ; a <= 102 ; a++)
{
putchar(a);
}
for ( ; i < 58 ; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
