#include "main.h"
#include <unistd.h>
/**
 * more_numbers - prints 10 times the number from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
int i = 0;
int j = 0;
int n = 10;
for (j = 0; j <= 10; j++)
{
for (i = 0; i <= 14; i++)
{
if (i <= 9)
{
_putchar(48 + i);
}
else
{
_putchar(48 + (i/10));
_putchar(48 + (i%10));

}
}
write(1,&n,1);
}
}
