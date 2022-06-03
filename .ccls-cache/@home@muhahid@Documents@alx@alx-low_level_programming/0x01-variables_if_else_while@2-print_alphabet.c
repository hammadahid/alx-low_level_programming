#include <stdio.h>

/**
 * main - Prints the alphabe in lower case
 *
 * Return: Always 0 (Success)
 */
char a = 97;
int main(void)
{
    for(; a<=122 ; a++)
    {
       putchar(a);
    }
    putchar('\n');
    return (0);
}
