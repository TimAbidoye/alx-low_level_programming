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

	for (c = 0; c < 8; c++)
	{
		int a;

		for (a = c + 1; a < 9; a++)
		{
			int b;

			for (b = a + 1; b < 10; b++)
			{
				putchar((c % 10) + '0');
				putchar((a % 10) + '0');
				putchar((b % 10) + '0');

				if (c != 7)
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
