#include <stdlib.h>
#include "main.h"
/**
 * _strdup - entry point
 * Description: creates a copy of the string given as a parameter
 * @str: user input
 * Return: pointer
*/
char *_strdup(char *str)
{
	char *array;
	int i, l = 0;

	if (str == NULL)
		return (NULL);

	while (str[l] != '\0')
		l++;

	array = malloc((l * sizeof(char)) + 1);

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l; i++)
	{
		array[i] = str[i];
	}
	return (array);
}
