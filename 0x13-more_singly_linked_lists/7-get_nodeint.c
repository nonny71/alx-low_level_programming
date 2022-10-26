#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Locates a given node of
 *		a listint_t linked list.
 * @index: Index of the node to returned
 * @head: Pointer to first/head of the listint_t linked list
 * @return: pointer to the node we're looking for, or NULl
 *		Otherwise - the located node.
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
