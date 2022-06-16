#include "main.h"
/**
 * leet - encodes a string in 1337
 * @s: pointer to string
 * Return: pointer to a string
 */

char *leet(char *s)
{
char lower_code[5] = {'a', 'e', 'o', 't', 'l'};
char Upper_code[5] = {'A', 'E', 'O', 'T', 'L'};
char Code[5] = {'4', '3', '0', '7', '1'};
int i = 0;
int j = 0;
while (s[j] != '\0')
{
for (i = 0; i < 5; i++)
{
if (s[j] == lower_code[i] || s[j] == Upper_code[i])
{
s[j] = Code[i];
}
}
j++;
}
return (s);
}
