#include "lists.h"
/**
 * listint_len - Number of element in a list
 * @h:pointer to the head of the list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
const listint_t *current = h;
int number_node = 0;
while (current != NULL)
{
current  = current->next;
number_node++;
}
return (number_node);
}
