#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Allocates memory for a 2D array of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: If width or height is 0 or negative, returns NULL.
 *         Otherwise, returns a pointer to the 2D array.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
	for (j = 0; j < width; j++)
	{
			grid[i][j] = 0;
	}
	}

	return (grid);
}

int main(void)
{
	int **grid;
	int width = 5;
	int height = 3;
	int i, j;

	grid = alloc_grid(width, height);

	if (grid == NULL)
	{
		printf("Failed to allocate memory\n");
		return (1);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			printf("%d ", grid[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);

	return (0);
}

