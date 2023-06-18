#include <stdio.h>
/**
 *main - Write a program that prints all single digit numbers of base 10
 *Return: is 0
 */

int main(void)
{
	int n;

	for (n = '0'; n  <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');
	return (0);
}
