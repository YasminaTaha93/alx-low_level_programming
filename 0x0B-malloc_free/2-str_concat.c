#include <stdlib.h>
#include "main.h"
/**
 * str_concat - entry point
 * concatenates two strings
 * @s1: user input
 * @s2: user input
 * Return: pointer
*/
char *str_concat(char *s1, char *s2)
{
	int i, s1len = 0, s2len = 0;
	char *array;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[s1len] != '\0')
		s1len++;

	while (s2[s2len] != '\0')
		s2len++;

	array = malloc(((s1len + s2len) * sizeof(char) + 1));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < s1len; i++)
	{
		array[i] = s1[i];
	}

	for (i = 0; i < s2len; i++)
	{
		array[i + s1len] = s2[i];
	}

	return (array);
}
