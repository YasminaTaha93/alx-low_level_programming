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

	for (a = 0; a <= 98; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(' ');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');
			if (a < 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
