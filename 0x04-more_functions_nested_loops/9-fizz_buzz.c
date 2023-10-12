#include <stdio.h>

/**
 * main - entry point
 * Description: FizzBuzz
 * Return: always 0
*/

int main(void)
{
	int n;

	for (n = 1; n < 101; n++)
	{
		if ((n % 3 == 0) && (n % 5 != 0))
		{
			printf("Fizz");
		}
		else if ((n % 5 == 0) && (n % 3 != 0))
		{
			printf("Buzz");
		}
		else if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%i", n);
		}
		if (n <= 99)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
