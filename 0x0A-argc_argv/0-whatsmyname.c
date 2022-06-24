#include <stdio.h>
/**
 * main - prints the name of program
 * @argc: integer that counts number of argument
 * @argv: an array of char that contains argument passed to the program
 * Return: Success(0)
 */
int main(__attribute__((unused))int argc, char **argv)
{
printf("%s\n", argv[0]);
return (0);
}
