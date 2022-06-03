#include <stdio.h>

/**
 * main - Prints all possible combinations for single digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i = 48;
    int a = 48;

    for (; i < 58 ; i++)
    {

        for(; a < 58 ; a++)
        {
           putchar(i);
           putchar(a);
           putchar(',');
           putchar(' ');
        }
        a = 48;
    }

    return (0);
}
