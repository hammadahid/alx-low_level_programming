#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - get operation
 * @argc - int
 * @argv - double pointer
 * Return:  */

int main(int argc, char **argv)
{
int a = atoi(argv[1]);
char *operator = argv[2];
int b = atoi(argv[3]);
int ptr;
if (argc != 4)
{
exit (0);
}
ptr = get_op_func(operator)(a , b);
printf("%d\n", ptr);
return (0);
}
