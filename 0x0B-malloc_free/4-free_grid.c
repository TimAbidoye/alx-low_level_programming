#include "main.h"
#include<stdlib.h>

/**
 * free_grid - frees a 2d int array
 * @a: array pointer
 * @height: no rows
 * Return: pointer to a 2d array or NULL
 */
void free_grid(int **a, int height)
{
	while (height > 0)
		free(a[--height]);
	free(a);
}
