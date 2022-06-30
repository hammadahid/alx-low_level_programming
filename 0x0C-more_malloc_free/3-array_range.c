#include "main.h"
#include <stdlib.h>
/**
 * array_range -   create an array
 * @min: integer
 * @max: integer
 * Return: NULL for failure, pointer to address for sucess
 */

int *array_range(int min, int max)
{
int len;
int i;
int *array;
if (min > max)
{
return (NULL);
}
len = max +1;
array = malloc(sizeof(int) * len);
if (array == NULL)
{
return (NULL);
}
for (i = 0; i < len; i++)
{
array[i] = min +i;
}
return (array);
}
