#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns pointer to newly allocated space in memory
 * @str: pointer to char
 * Return: NULL if str = NULL,pointer to address
 */

char *_strdup(char *str)
{
char *dup;
int strlen;
int i;
if (str == NULL)
{
return (NULL);
}
for (strlen = 0; str[strlen] != '\0'; strlen++)
{
;
}
dup = malloc((sizeof(char) * strlen) + 1);
if (dup == NULL)
{
return (NULL);
}
for (i = 0; i < strlen; i++)
{
dup[i] = str[i];
}
return (dup);
}
