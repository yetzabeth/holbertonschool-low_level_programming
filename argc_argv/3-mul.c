#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main fuction
 * @argc: saves the memory address
 * @argv: pointer to pointer
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int a;
	int b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
