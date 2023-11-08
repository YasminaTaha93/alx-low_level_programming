#include <stdlib.h>
/**
 * int_index - Entry point.
 * searches for an integer
 * @array: user input
 * @size: user input
 * @cmp: user input
 * Return: integer.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL &&  cmp != NULL)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]) != 0)
				return (i);
	}
	return (-1);
}