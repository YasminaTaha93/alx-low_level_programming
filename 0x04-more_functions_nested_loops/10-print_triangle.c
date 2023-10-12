#include "main.h"

/**
 * print_triangle - entry point
 * Description: prints triangle using #
 * @n: user input
 * Return: void
*/

void print_triangle(int n)
{
	int a, b, c;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = n - a - 1; b > 0; b--)
			{
				_putchar(' ');
			}
			for (c = 0; c <= a ; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
