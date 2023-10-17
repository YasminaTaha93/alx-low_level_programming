#include "main.h"

/**
 * _puts - entry point
 * Description: print a string
 * @s: user input
 * Return: nothing
*/

void _puts(char *s)
{
	int i = 0;

	while (i >= 0)
	{
		if (s[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		else
		{
			_putchar(s[i]);
			i++;
		}
	}
}
