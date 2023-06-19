#include <stdio.h>
/**
 *  *main - a program that prints the alphabet  in reverse
 *   *Return: is 0
 *    **/
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
		putchar(alphabet);

	putchar('\n');

	return (0);
}
