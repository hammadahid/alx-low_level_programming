#include "lists.h"
#include <string.h>
/**
 * add_node - adds new node at the beginning of the string
 * @head: double pointer
 * @str: string literal
 * Return: address of new element, NUll if failed
 */

list_t *add_node(list_t **head, const char *str)
{
int len = 0;
list_t *new_node;
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
free(new_node);
return (NULL);
}
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
for ( ; str[len] != '\0'; len++)
;
new_node->len = len;
new_node->next = *head;
*head = new_node;
return (new_node);
}
