#include "main.h"
/**
 * factorial - entry point
 * Description: factorial of n
 * @n: user input
 * Return: int
*/
int factorial(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
