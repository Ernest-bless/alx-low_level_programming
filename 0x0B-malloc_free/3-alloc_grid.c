#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - returns pointer to a 2 dimensional array of integers
  * @width: input for width
  * @height: in put for height
  * Return: Pointer to the array.
  */
int **alloc_grid(int width, int height)
{
	int **q;
	int p, r;

	if (width <= 0 || height <= 0)
		return (NULL);

	q = malloc(sizeof(int *) * height);

	if (q == NULL)
		return (NULL);

	for (p = 0; p < height; p++)
	{
		q[p] = malloc(sizeof(int) * width);

		if (q[p] == NULL)
		{
			for (; p >= 0; p--)
				free(q[p]);

			free(q);
			return (NULL);
		}
	}

	for (p = 0; p < height; p++)
	{
		for (r = 0; r < width; r++)
			q[p][r] = 0;
	}
	return (q);
}
