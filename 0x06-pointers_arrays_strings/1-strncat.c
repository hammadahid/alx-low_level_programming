#include <stdlib.h>
#include "main.h"
/**
 * _strncat - appends n character of src string to dest string
 * @dest: pointer to char
 * @src: pointer to char
 * @n: int
 * Return: char pointer
 */
char *_strncat(char *dest, char *src, int n)
{
int j = 0;
int i = 0;
while (dest[j] != '\0')
{
j++;
}


for (int l = 0; l < n; l++, j++)
{
dest[j] = src[l];
}
return (dest);
}

