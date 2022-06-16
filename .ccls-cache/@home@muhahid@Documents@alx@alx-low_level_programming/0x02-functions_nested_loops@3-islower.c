#include "main.h"

/**
 * main: Execute islower
 * Description: Return 1 if parameter c is lowercase and 0 is otherwise
 * Return: 1 if lowercase, 0 if otherwise
 */

int _islower(int c)
{
if (c >= 98 && c <= 122){
return 1;
}
return 0;
}
