#include <stdio.h>

/**
 * main - entry point
 * Description: finds biggest prime factor
 * Return: 0
*/

int main(void)
{
	long n = 612852475143;
	int i, j;

	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			n = n / i;
			j = i;
			i = 1;
			if (n / j == 1)
			{
				i = j;
			}
		}
	}
	printf("%d\n", j);
	return (0);
}
