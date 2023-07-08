#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * free_grip - Write a function that frees a 2 dimensional grid previously
 * created by your alloc_grid function
 * @grid: arrays bidimensional
 * @height: height
 * Return: voi
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
