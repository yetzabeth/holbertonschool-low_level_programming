#include "main.h"
/**
 * aux - this fuction is the aux to search the number the square root number
 * @n: number
 * @m: nnumber
 * Return: aux
 */
int aux(int n, int m)
{
	if (m * m == n)
		return (m);
	if (m * m > n)
		return (-1);
	return (aux(n, m + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number
 * Return: square root of a number
 */
int _sqrt_recursion(int n)
{
	return (aux(n, 1));
}
