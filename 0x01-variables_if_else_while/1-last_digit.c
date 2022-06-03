#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Performs Different conditional operations on the n
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int Last_Digit;	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
Last_Digit = n % 10;
printf("Last digit of %d is %d ", n, Last_Digit);
if (Last_Digit > 5)
{
printf("and is greater than 5\n");
}
if (Last_Digit == 0)
{
printf("and is 0\n");
}
if (Last_Digit < 5 && Last_Digit != 0)
{
printf("and is less than 6 and not 0\n");
}
return (0);
}
