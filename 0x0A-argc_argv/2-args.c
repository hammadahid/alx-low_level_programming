#include <stdio.h>
/**
 * main - prints allargument passed to the program
    * @argc: integer that counts number of argument
    * @argv: an array of char that contains argument passed to the program
    * Return: Success(0)
    */
int main(int argc, char **argv)
{
int i = 0;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
