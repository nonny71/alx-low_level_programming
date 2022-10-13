#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - Searches for an integer in an array of integers
 * @array: The array of integers
 * @size: The size of the array
 * @cmp: A pointer to the function to be used to compare values
 * Return: If no element matches or size <= 0 
 * -1 if size <= 0 or integer that matches condition of @cmp
 *  wasn't found in @array
 *  NULL if @array || @cmp is NULL
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}
