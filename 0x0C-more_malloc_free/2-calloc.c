#include "main.h"

/**
 * _calloc - Allocates memory for an array of a certain number
 *	of elements each of an inputted byte size
 * @nmemb: The number of elements
 * @size: The byte size of each array element
 * Return: If nmemb = 0, size = 0, or the function fails - NULL
 *	Otherwise - a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);

	for (index = 0; index < size * nmemb; index++)
		ptr[index] = 0;
	return ((void *)ptr);
}
