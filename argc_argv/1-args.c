#include "main.h"
#include <stdio.h>
/**
 * main - main fuction
 * @argc: saves the memory address
 * @argv: pointer to pointer
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", (argc - 1));
	return (0);
}
