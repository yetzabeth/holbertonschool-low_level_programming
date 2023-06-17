#include <stdio.h>
/**
 *main - a program that prints the alphabet
 *Return: is 0
 **/

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);

	putchar('\n');
	return (0);
}
