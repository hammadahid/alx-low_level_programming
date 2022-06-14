#include "main.h"

/**
 * _atoi - convert string to int
 * @s: pointer to char
 * Return: int
 */
int _atoi(char *s)
{
int i = 0;
int j = 0;
int n = 0;
int len = 0;
while (s[len] != '\0')
{
len++;
}
while (1)
{
if (i == len)
{
break;
}
if (s[i] >= 48 && s[i] <= 57)
{
n = (n * 10) + (s[i] - 48);
}
if (s[i] == 43)
{
j = j + 1;
}
if (s[i] == 45)
{
j = j + 2;
}
i++;
}
if (j == 2)
{
n = n * (-1);
}
return (n);
}
