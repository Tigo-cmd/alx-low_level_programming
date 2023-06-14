#include "main.h"
/**
* free_grid- function that frees a 2 dimensional grid previously created
* @grid: first param
* @height: second param
*
* Decsription: unction that frees a 2 dimensional
* grid previously created by your alloc_grid function.
* Return: Always(0) success
*/
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return (NULL);
	if (height <= 0)
		return (NULL);
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
