#include "main.h"
/**
 * reverse_array - reverse the order of the element of an array
 * @a: pointer to int
 * @n: an int
 * Return: void
 */
void reverse_array(int *a, int n)
{
int i = 0;
int temp = 0;
for (i = 0; i < n; i++, n--)
{
temp = a[i];
a[i] = a[n - 1];
a[n - 1] = temp;
}

}
