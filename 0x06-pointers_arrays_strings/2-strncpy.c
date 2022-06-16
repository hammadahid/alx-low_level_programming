#include <stdlib.h>
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
int j = 0;
int i = 0;
int k = 0;
int count = 0;

while (src[i] != '\0')
{
i++;
}
char *append = malloc(i);

for (int l = 0; l < n; l++)
{
append[k] = src[l];
}
return (append);
}
