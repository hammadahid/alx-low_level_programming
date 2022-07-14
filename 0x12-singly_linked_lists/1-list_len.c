#include "lists.h"
/**
 * list_len - returns the lenght of a list
 * @h: pointer to a struct
 * Return:  lenght of list
 */

size_t list_len(const list_t *h)
{
int len = 0;
while (h != NULL)
{
len++;
h = h->next;
}
return (len);
}
