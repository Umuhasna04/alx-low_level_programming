#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the grind
 * @height: height of the grid
 *
 * Return: pointer to a 2 dimensional array of integers, or NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (width <= 0 || height <= 0)
		return (0);

	arr = (int **)malloc(sizeof(int *) * height);
	if (!arr)
		return (0);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (!arr[i])
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(arr);

			return (0);
		}
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
