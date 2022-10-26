#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @index: Index of the node to returned
 * @head: Pointer to first/head of the listint_t linked list
 * @Return: pointer to the node we're looking for, or NULl,
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *temp = head;

	while (temp && (counter < index))
	{
		temp = temp->next;
		counter++;
	}
	return (temp ? temp : NULL);
}
