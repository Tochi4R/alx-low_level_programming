#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list
 * @h: A pointer to a pointer to the head node of the list
 *
 * Return: The size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *next;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	while (current != NULL)
	{
		count++;
		next = current->next;
		free(current);
		if (next >= current)
			break;
		current = next;
	}
	*h = NULL;
	return (count);
}
