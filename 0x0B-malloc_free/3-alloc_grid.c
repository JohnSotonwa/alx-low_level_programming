#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **space;
	int i, j, size=0;
	size = width * height;

	if (width <= 0 || height <= 0)
		return(NULL);

	space = malloc(height * sizeof(int *));

	if (space == NULL)
	{
		free(space);
		return (NULL);
	}

	for (i=0; i<height; i++)
	{
		space[i] = malloc(width * sizeof(int));
		for (j=0; j<width; j++)
		{
			space[i][j] = 0;
		}
	}
	return(space);
}
