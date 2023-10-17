#include "main.h"
#include <stdio.h>

/**
 * print_array - entry point
 * Description: prints array
 * @a: user input
 * @n: user input
 * Return: void
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
