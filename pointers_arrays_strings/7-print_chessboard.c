#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - Write a function that prints the chessboard.
 * @a: pointer
 * Return: Always 0
 */
void print_chessboard(char (*a)[8])
{
	int row;
	int col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(a[row][col]);
		}
			_putchar(10);
	}
}
