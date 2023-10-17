#include "main.h"

/**
 * print_rev - entry point
 * Description: print reverse
 * @s: user input
 * Return: nothing
*/

void print_rev(char *s)
{
	int i = 0;
	int j;
	int n;

	while (i >= 0)
	{
		if (s[i] != '\0')
		{
			i++;
		}
		else
		{
			n = i;
			break;
		}
	}

	for (j = n - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
