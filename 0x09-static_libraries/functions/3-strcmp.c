#include <stdlib.h>
#include "main.h"
/**
 * _strcmp - compares left string and right string
 * @s1: pointer to char
 * @s2: pointer to char
 * Return: char pointer
 */
int _strcmp(char *s1, char *s2)
{
int j = 0;
int i = 0;

while (1)
{
if (s1[i] == '\0' || s2[i] == '\0')
{
break;
}
if (s1[i] != s2[i])
{
j = ((s1[i]) - (s2[i]));
break;
}
else
{
j = 0;
}
i++;
}
return (j);
}
