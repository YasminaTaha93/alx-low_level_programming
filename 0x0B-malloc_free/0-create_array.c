#include <stdlib.h>
#include "main.h"
/**
 * create_array - entry point
 * creates array of chars
 * @size: user input
 * @c: user input
 * Return: pointer
*/
char *create_array(unsigned int size, char c)
{
	char *array = malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
