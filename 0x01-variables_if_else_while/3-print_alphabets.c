#include <stdio.h>

/**
 * main - Prints the alphabet in lower and upper case
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char a = 97;
for ( ; a <= 122 ; a++)
{
putchar(a);
}
for ( a=65; a<=90 ; a++)
{
putchar(a);
}
putchar('\n');
return (0);
}
