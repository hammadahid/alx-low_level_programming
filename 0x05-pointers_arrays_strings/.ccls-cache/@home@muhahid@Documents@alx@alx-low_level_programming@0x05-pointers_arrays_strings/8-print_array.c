#include "main.h"
#include <stdio.h>

/**
 * * print_array - print n elements of an array of integers
 * Return: void
 */

void print_array(int *a, int n)
{
int i = 0;
for ( i = 0; i <= n; i++)
{

if (i == n){
printf("%d",*(a+i));
}

else
{
printf("%d",*(a+i));
printf(",");
}

}
printf("\n");
}