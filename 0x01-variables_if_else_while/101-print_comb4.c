#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using main function
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	for (a = 0; a <= 7; a++)
	{
		for (b = a + 1; b <= 8; b++)
		{
			for (c = b + 1; c <= 9; c++)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');
				d = (a * 100) + (b * 10) + c;
				if (d < 789)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
