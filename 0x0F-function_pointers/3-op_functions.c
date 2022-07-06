#include "3-calc.h"
/**
 * opp_add - returns sum of a and b
 * @a: integer
 * @b: integer
 * Return: sum
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * opp_sub - returns subtraction of a and b
 * @a: integer
 * @b: integer
 * Return: subtraction
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * opp_mul - returns sum of a and b
 * @a: integer
 * @b: integer
 * Return: mul
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * opp_div - returns div of a and b
 * @a: integer
 * @b: integer
 * Return: div
 */
int op_div(int a, int b)
{
if (b)
{
return (a / b);
}
exit(100);
}

/**
 * opp_mod - returns mod of a and b
 * @a: integer
 * @b: integer
 * Return: mod
 */
int op_mod(int a, int b)
{
if (b)
{
return (a % b);
]
exit(100);
}
