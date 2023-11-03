#include <stdlib.h>
/**
 * array_range - entry point
 * Description: creates array of integers
 * @min: user input
 * @max: user input
 * Return: pointer to created array
*/
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);

	arr = malloc(((max - min + 1) * sizeof(int)));
	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		arr[i] = min;

	return (arr);
}
