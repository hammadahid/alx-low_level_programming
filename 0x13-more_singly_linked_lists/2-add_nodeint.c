#include "lists.h"
/**
 * add_nodeint - add new node at the beginning of the list
 * @head: double pointer
 * @n: int
 * Return: Address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (new == NULL)
{
free(new);
return (NULL);
}
new->n = n;
new->next = *head;
*head = new;
return (new);
}
