#include <stdio.h>

/**
 * main - Prints the alphabe in lower case
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char a = 97;
for ( ; a<=122 ; a++)
{
if (a != 101)
{
if (a != 113)
{
putchar(a);
}
}
}
putchar('\n');
return (0);
}
