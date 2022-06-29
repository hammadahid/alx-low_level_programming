#include <stdlib.h>
#include "main.h"

/**
 * str_concat - contains the content of s1 and s2
 * @s1: pointer to char
 * @s2: pointer to char
 * Return: NULL on failure, address on success
 */
char *str_concat(char *s1, char *s2)
{
char *concat;
int size_s1;
int size_s2;
int i;
int j;
if (s1 == NULL)
{
s1 = "\0";
}
if (s2 == NULL)
{
s2 = "\0";
}
for (size_s1 = 0; s1[size_s1] != '\0'; size_s1++)
{
;
}
for (size_s2 = 0; s2[size_s2] != '\0'; size_s2++)
{
;
}
concat = malloc(sizeof(char) * (size_s1 + size_s2 + 1));
if (concat == NULL)
{
return (NULL);
}
for (i = 0; i < size_s1; i++)
{
concat[i] = s1[i];
}
for (j = 0; j < size_s2; j++, i++)
{
concat[i] = s2[j];
}
return (concat);
}
