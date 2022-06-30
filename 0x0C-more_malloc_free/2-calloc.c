#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocates memory of an array of nmeb eleme
 * @nmemb: integer
 * @size: integer
 * Return: NULLL if failure, pointer to address for success
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int i;
if (nmemb <= 0 || size <= 0)
{
return (NULL);
}
ptr = malloc(nmemb * size);
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < (nmemb * size); i++)
{
ptr[i] = 0;
}
return ((void *)ptr);
}
