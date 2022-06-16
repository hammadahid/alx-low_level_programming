#include "main.h"

/**
 * _strcpy - copies string pointed to by src
 * @dest: pointer of char
 * @src: pointer to char
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
int i = 0;
while (1)
{
dest[i] = src[i];
if (src[i] == '\0')
{
break;
}
i++;
}
return (dest);
}
