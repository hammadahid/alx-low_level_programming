#include "main.h"

/**
 * main: Execute _isalpha
 * Description: return 1 if c is lowercase or uppercase else return 0
 * Return: 1 if uppercase or lowercase 0 if otherwise */

int _isalpha(int c)
{
if ( _islower(c) == 0 || _islower(c) == 1 )
{
return (1);
}
return (0);
}
