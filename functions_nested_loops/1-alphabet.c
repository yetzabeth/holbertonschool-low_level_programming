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
