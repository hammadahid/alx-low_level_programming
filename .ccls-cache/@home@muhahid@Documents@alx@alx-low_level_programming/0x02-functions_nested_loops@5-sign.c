#include "main.h"
/**
 * main: Execute print_sign function
 * Description: check if number n is a positive or negative number
 * Return: 0 if n = 0, 1 if n > 0, -1 if n < 0 */

int print_sign(int n)
{
if ( n > 0 )
{
_putchar('0');
return (1);
}
else if ( n == 0)
{
_putchar('0');
return (0);
}
else if ( n < 0 )
{
_putchar('-');
_putchar('1');
return (-1);
}
}
