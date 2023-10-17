#include "main.h"
#include <stdio.h>

/**
 * _strcpy - entry point
 * Description: copy string
 * @dest: user input
 * @src: user input
 * Return: string
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (i >= 0)
	{
		dest[i] = src[i];
		if (dest[i] != '\0')
			i++;
		else
			break;
	}
	return (dest);
}
