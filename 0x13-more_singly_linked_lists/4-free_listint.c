#include "lists.h"
/**
 * free_listint - frees listint_t
 * @head: pointer
 * Return: void
 */

void free_listint(listint_t *head)
{
listint_t *current;
listint_t *next;
current = head;
while (current != NULL)
{
next = current->next;
free(current);
current = next;
}
}
