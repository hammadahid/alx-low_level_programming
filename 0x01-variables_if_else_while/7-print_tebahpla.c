#include <stdio.h>

/**
 * main - Prints the alphabet in reverse and in lower case
 *
 * Return: Always 0 (Success)
 */
char a = 122;
int main(void)
{
    for(; a>=97 ; a--)
    {
       putchar(a);
    }
    putchar('\n');
    return (0);
}
