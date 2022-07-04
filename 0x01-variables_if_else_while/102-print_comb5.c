#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int c;

	for (c = 0; c < 99; c++)
	{
		int a;

		for (a = c + 1; a < 100; a++)
		{
			putchar((c / 10) + '0');
			putchar((c % 10) + '0');
			putchar(' ');
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');

			if (c != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
