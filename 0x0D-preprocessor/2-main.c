#include <stdio.h>

/**
 * main - prints name of file it is compiled from
 * Return: 0 for success, 1 for failure
 */

int main(void)
{
char *name  = __FILE__;
printf("%s\n", name);
return (0);
}
