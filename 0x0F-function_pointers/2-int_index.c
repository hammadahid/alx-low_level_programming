#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: pointer to an int
 * @size: pointer to an int
 * @cmp: pointer to a function
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int result;
int i;
if (size <=  0)
{
return (-1);
}
else
{
for (i = 0; i < size; i++)
{
result = cmp(array[i]);
if (result != 0)
{
return (i);
}
}
}
return (-1);
}
