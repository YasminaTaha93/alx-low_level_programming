#include "main.h"

/**
 * _strlen - entry point
 * Description: calculate string length
 * @s: user input
 * Return: int x
*/

int _strlen(char *s)
{
	int i = 0;
	int x;

	while (i >= 0)
	{
		if (s[i] != '\0')
			i++;
		else
		{
			x = i;
			break;
		}
	}
	return (x);
}
