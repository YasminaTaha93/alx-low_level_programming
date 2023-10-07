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
	int a;
	int b;
	int c;

	for (a = 0; a < 9; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			putchar(a + '0');
			putchar(b + '0');
			c = (a * 10) + b;
			if (c < 89)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
