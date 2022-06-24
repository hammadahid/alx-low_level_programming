#include <stdio.h>
/**
 * main - prints the number of arguments passed to a program
 * @argc: integer that counts number of argument
 * @argv: an array of char that contains argument passed to the program
 * Return: Success(0)
 */
int main(int argc, __attribute__((unused))char **argv)
{
printf("%d\n", argc - 1);

return (0);
}
