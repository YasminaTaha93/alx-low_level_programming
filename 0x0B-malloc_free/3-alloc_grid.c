#include <stdlib.h>
#include "main.h"
/**
* alloc_grid - entry point
* makes a 2 dimentional array
* @width: user input
* @height: user input
* Return: int pointer to 2 dimentional array
*/
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	array = malloc(height * sizeof(int *));

	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			for (i = 0; i < height; i++)
			{
				free(array[i]);
			}
			free(array);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			array[i][j] = 0;

	return (array);
}
