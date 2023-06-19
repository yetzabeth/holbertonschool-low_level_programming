#include <stdio.h>
/**
 *main - Write a program that prints all the numbers of base 16 in lowercase
 *Return: is 0
 */

int main(void)
{
	char n;
	char l;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	for (l = 'a'; l <= 'f'; l++)
	{
		putchar(l);
	}

	putchar('\n');
	return (0);
}
