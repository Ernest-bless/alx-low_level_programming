#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * free_grid - frees a 2 dimensional grid
  * @grid: grid
  * @height: grid height
  * Return: Nothing.
  */
void free_grid(int **grid, int height)
{
	int p;

	for (p = 0; p < height; p++)
	{
		free(grid[p]);
	}
	free(grid);
}
