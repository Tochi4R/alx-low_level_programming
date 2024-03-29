#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to the head node of the linked list.
 * @index: Index of the node to be returned.
 *
 * Return: Pointer to the nth node of the linked list, or NULL if the node
 * does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current = head;

	for (i = 0; i < index && current != NULL; i++)
	{
		current = current->next;
	}
	return (current);
}
