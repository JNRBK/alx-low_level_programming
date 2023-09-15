#include "3-calc.h"
#include <stddef.h>

/**
 * op_add - function to add
 * @a: int
 * @b: int
 * Return: sum
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtract
 * @a: int
 * @b: int
 * Return: subtraction
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - muliply
 * @a: int
 * @b: int
 * Return: multiplication
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divids
 * @a: int
 * @b: int
 * Return: division
*/
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - module
 * @a: int
 * @b: int
 * Return: modulus
*/
int op_mod(int a, int b)
{
	return (a % b);
}
