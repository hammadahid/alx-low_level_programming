#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Returns a pointer to the allocated memory
 * @b: unsigned int
 * Return: pointer to allocated memeory
 */

void *malloc_checked(unsigned int b)
{
int *ptr;
ptr = malloc(b);
if (ptr == 0)
{
exit(98);
}
return (ptr);
}
