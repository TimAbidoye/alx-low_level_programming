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

	for (c = 0; c < 10; c++)
	{
		putchar((c % 10) + '0');
		if (c >= 0 && c < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
