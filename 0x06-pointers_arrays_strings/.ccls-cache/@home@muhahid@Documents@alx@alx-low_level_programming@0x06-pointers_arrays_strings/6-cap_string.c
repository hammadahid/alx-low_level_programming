#include "main.h"

/**
  * cap_string - capitalize all word in a string
  * @s: pointer to string
  * Return: pointer to string
  */

char *cap_string(char *s)
{
int i = 0;
int j = 0;
char seprator[] = {',', ';', '.', '!', '?', '"', '(', ')',
'{', '}', ' ', '\t', '\n'};
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j  < 12; j++)
{
if (s[i] == seprator[j])
{
if (s[i + 1] >= 97 && s[i + 1] <= 122)
{
s[i + 1] = s[i + 1] - 32;
}
}
}
}
return (s);
}
