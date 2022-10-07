#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees grid
 *
 * @grid: grid to free up
 * @height: number of rows
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
int j = 0;
while (j < height)
{
free(grid[j]);
j++;
}
free(grid);
}
