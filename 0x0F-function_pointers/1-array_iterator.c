#include "function_pointers.h"
/**
 * array_iterator - execute a function given as a parameter
 * @array: pointer to int
 * @size: unsigned int
 * @action: pointer to a function
 * Return: null
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (action != NULL && array && size)
{
size_t i;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
