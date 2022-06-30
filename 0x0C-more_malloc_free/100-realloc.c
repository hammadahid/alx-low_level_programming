#include <stdlib.h>

/**
 * _realloc - reallocates memory block
 * @ptr: pointer to previous memory
 * @old_size: unsigned int
 * @new_size: unsigned int
 * Return: pointer to new memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int i;
char *Nptr;
char *cptr = (char *)ptr;
if (new_size == old_size)
{
return (ptr);
}
if (ptr == NULL)
{
Nptr = malloc(new_size);
if (Nptr == NULL)
{
return (NULL);
}
return (Nptr);
}
if (new_size > old_size)
{
Nptr = malloc(new_size);
if (Nptr == NULL)
{
return (NULL);
}
for (i = 0; i < old_size; i++)
{
Nptr[i] = cptr[i];
}
free(ptr);
}
return (Nptr);
}
