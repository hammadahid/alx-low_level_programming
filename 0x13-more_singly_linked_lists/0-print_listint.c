#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all element of listint_t
 * @h: const listint_t pointer
 * Return: size_t, number of nodes
 */
size_t print_listint(const listint_t *h)
{
const listint_t *current = h;
int number_node = 0;
while (current != NULL)
{
printf("%d\n", current->n);
current  = current->next;
number_node++;
}
return (number_node);
}
