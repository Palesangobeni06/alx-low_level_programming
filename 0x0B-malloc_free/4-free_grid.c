#include <stdlib.h>
#include "main.h"
/**
 * free_grid - ...
 * @grid: ...
 * @height: ...
 * Description: frees memory of grid
 * Return: ...
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
