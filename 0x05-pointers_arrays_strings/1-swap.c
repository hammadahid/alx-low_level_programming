#include "main.h"

/**
 * swap_int - swap the values of two integers
 * Return: void
 */

void swap_int(int *a,int *b)
{
int c = 0;
c = (*a) ^ (*b);
*a = (*a) ^ c;
*b = (*b) ^ c;
}
