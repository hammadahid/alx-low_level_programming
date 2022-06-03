#include <stdio.h>

/**
 * main - Prints all base 16 digits
 *
 * Return: Always 0 (Success)
 */
char a = 48;
int i = 97;
int main(void)
{
    for (; i <= 102 ; i++)
    {
        putchar(i);
    }
    for(; a < 58 ; a++)
    {
        putchar(a);
    }
    putchar('\n');
    return (0);
}
