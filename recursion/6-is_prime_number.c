#include "main.h"
/**
 * aux - aux to function that returns 1 if the input
 * integer is a prime number, otherwise return 0.
 * @n: number
 * @m: numer
 * Return: aux
 */
int aux(int n, int m)
{
	if (m == 1)
		return (1);
	else if ((n % m) == 0)
		return (0);
	else
		return (aux(n, m - 1));
}
/**
 * is_prime_number - function that returns 1 if the input
 * integer is a prime number, otherwise return 0
 * @n: number
 * Return: aux
 */
int is_prime_number(int n)
{
	if (n > 1)
		return (aux(n, n - 1));
	else
		return (0);
}
