#include "lists.h"
/**
 * print_list - prints all elements of a list
 * @h: pointer to a struct list_t
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
int count = 0;
while (h != NULL)
{
if (h->str != NULL)
{
printf("[%d] %s\n", h->len, h->str);
}
else
{
printf("[%d] %s\n", 0, "nil");
}
h = h->next;
count++;
}
return (count);
}
