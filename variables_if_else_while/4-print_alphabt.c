#include <stdio.h>
/**
 *main - a program that prints the alphabet  in lowercase
 *Print all the letters except q and e
 *Return: is 0
 **/
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z';)
	{
		if (alphabet != 'e' && alphabet != 'q')
		{
			putchar(alphabet);
			alphabet++;
		}
		else
		{
			alphabet++;
		}
	}
	putchar('\n');
	return (0);
}
