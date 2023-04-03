#include <stddef.h>
#include "lists.h"
/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @h: A pointer to the head node of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
