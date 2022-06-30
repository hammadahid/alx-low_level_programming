#include <stdlib.h>
#include "main.h"
/**
 * _strlen - Determines the lenght of a string
 * @s: pointer to char
 * Return: lenght of a string
 */
int _strlen(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
;
}
return (i);
}
/**
 * string_nconcat - contains the content of s1 and s2
 * @s1: pointer to char
 * @s2: pointer to char
 * @n: unsigned int
 * Return: NULL on failure, address on success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
int size_s1;
unsigned int size_s2;
int i;
unsigned int j;
int len;
if (s1 == NULL)
{
s1 = "\0";
}
if (s2 == NULL)
{
s2 = "\0";
}
size_s1 = _strlen(s1);
size_s2 = _strlen(s2);
if (n >= size_s2)
{
len = (size_s1 + size_s2 + 1);
n =  size_s2;
}
else
{
len = (size_s1 + n + 1);
}
concat = malloc(sizeof(char) * len);
if (concat == NULL)
{
return (NULL);
}
for (i = 0; i < size_s1; i++)
{
concat[i] = s1[i];
}
for (j = 0; j < n; j++, i++)
{
concat[i] = s2[j];
}
return (concat);
}
