#include "main.h"

/**
 * swap_int - entry point
 * Description: swap two integers
 * @x: user input
 * @y: user input 
 * Return: nothing
*/

void swap_int(int *x, int *y)
{
	int z;

	z = *x;
	*x = *y;
	*y = z;
}
