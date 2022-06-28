#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a two dimensional array
 * @width: int
 * @height: int
 * Return: NULL on faliure
 */

int **alloc_grid(int width, int height)
{
int **array;
int i;
array = malloc(sizeof(int *) * (height));
if (width <= 0 || height <= 0)
{
return (NULL);
}
for (i = 0; i < width; i++)
{
array[i] = malloc(width * sizeof(int **));
}
return (array);
}
