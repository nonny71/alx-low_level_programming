#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array
 * @width: The width of the 2-dimensional array
 * @height: The height of the 2-dimensional array
 * Return: If width <= 0, height <= 0, or the function fails - NULL
 *	Otherwise - a pointer to the 2-dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **dim_arr;
	int hgt_index, wid_index;

	if (width <= 0 || height <= 0)
		return (NULL);
	dim_arr = malloc(sizeof(int *) * height);

	if (dim_arr == 0)
		return (NULL);
	for (hgt_index = 0; hgt_index < height; hgt_index++)
		dim_arr[hgt_index] = malloc(sizeof(int) * width);
	if (dim_arr[hgt_index] == NULL)
	{
		for (; hgt_index >= 0; hgt_index--)
			free(dim_arr[hgt_index]);
		free(dim_arr);
		return (NULL);
	}
	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		for (wid_index = 0; wid_index < width; wid_index++)
			dim_arr[hgt_index][wid_index] = 0;
	}
	return (dim_arr);
}
