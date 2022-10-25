#include <stdlib.h>
#include "lists.h"

/**
 * @head: Pointer to first/head of the listint_t linked list
 * @index: Index of the node to returned
 * @head: Pointer to first/head of the listint_t linked list
 * @head: Return: The nth node of a listint_t linked list,
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
	if (counter < index)
		return (NULL);

	return (temp);


	)
}
