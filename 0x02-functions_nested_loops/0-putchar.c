#include "main.h"

/**
 * main - entry point
 *
 * Return: always 0 successful
 */
int main(void)
{
	char c[8] = "_putchar";
	int i;

	i = 0;
	while (i < 8)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
