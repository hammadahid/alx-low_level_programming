#include <stdio.h>
#include <stdlib.h>
/**
 * IsDigit - check if a string contains only numbers
 * @s: pointer to a string
 * Return: int
 */
int IsDigit(char *s)
{
int i = 0;
int set  = 0;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] < 48 || s[i] > 57)
{
set  = 1;
}
}
return (set);
}

/**
 * main - add all postive numbers
 * @argc: integer that counts number of argument
 * @argv: an array of char that contains argument passed to the program
 * Return: Success(0)
 */
int main(int argc, char **argv)
{
int sum = 0;
int check = 0;
int i = 0;
if (argc == 1)
{
printf("0\n");
}
else
{
for (i = 0; i < argc; i++)
{
check = IsDigit(argv[i]);
if (check == 0)
{
sum = sum + (atoi(argv[i]));
}
}
if (check == 0)
{
printf("%d\n", sum);
}
else
{
printf("Error\n");
}
}
return (0);
}
