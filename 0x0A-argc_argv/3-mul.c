#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all argument passed to the program
 * @argc: integer that counts number of argument
 * @argv: an array of char that contains argument passed to the program
 * Return: Success(0)
 */

int main(int argc, char **argv)
{
int a = 0;
int b = 0;

if (argc > 3)
{
printf("Error\n");
}
else
{
a = atoi(argv[1]);
b = atoi(argv[2]);
printf("%d\n", a *b);
}
return (0);
}
