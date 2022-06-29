#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: unsigned int
 * @c: char
 * Return: pointer to an array or NULL if its fails
 */

char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i = 0;
if (size == 0)
{
return (NULL);
}
array = malloc(sizeof(char) * size);
if (array == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
*(array + i) = c;
}
return (array);
}
