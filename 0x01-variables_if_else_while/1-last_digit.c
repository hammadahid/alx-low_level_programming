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
int Last_Digit;
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

Last_Digit = n % 10;
if (n < 0)
{
Last_Digit = Last_Digit * -1;
}
printf("Last digit of %d is %d ", n, Last_Digit);
if (Last_Digit > 5)
{
printf("and is greater than 5\n");
}
if (Last_Digit == 0)
{
printf("and is 0\n");
}
else
{
printf("and is less than 6 and not 0");
}
return (0);
}
