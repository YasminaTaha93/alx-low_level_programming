#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: checks a random number with if conditional
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int n;
	int b = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	b = n % 10;
	if (b >= 6)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, b);
	}
	else if (b < 6 && b != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, b);
	}
	else if (b == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, b);
	}
	return (0);
}
