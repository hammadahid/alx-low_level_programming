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
int l = 0;
while (dest[i] != '\0')
{
i++;
}
for (l = 0; l < n; l++, i++)
{
dest[i] = '\0';
}
return (dest);
}
