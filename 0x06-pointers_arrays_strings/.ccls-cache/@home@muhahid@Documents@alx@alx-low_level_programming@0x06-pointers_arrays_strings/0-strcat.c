#include "main.h"
/**
 * _strcat - appends src string to dest string
 * @dest: pointer to char
 * @src: pointer to char
 * Return: char pointer
 */
char *_strcat(char *dest, char *src)
{
int j = 0;
int i = 0;
int l = 0;
while (dest[j] != '\0')
{
j++;
}

while (src[i] != '\0')
{
i++;
}

for (l = 0; l < i; l++, j++)
{
dest[j] = src[l];
}
return (dest);
}
