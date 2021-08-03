
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Delete the first item in list
 * @head: Pointer to the pointer to the start of list
 *
 * Return: The value stored in node
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int n;

	current = *head;
	if (current == NULL)
		return (0);
	n = current->n;
	*head = current->next;
	free(current);
	return (n);
}
