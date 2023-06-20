#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercas
	 **/

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);

	_putchar('\n');
}

/**
 *print_alphabet_x10 - Write a function that prints 10 times the alphabet
 **/

void print_alphabet_x10(void)
{
	char nv;

	for (nv = 0; nv < 10; nv++)
	{
		print_alphabet();
	}
}

