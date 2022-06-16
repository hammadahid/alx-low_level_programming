#include "main.h"
/**
 * _strncpy - copy n character from src string to dest string
 * @dest: pointer to char
 * @src: pointer to char
 * @n: int
 * Return: char pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for ( ; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
