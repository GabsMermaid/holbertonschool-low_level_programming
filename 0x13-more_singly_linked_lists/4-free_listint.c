#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Free all nodes from list
 * @head: Pointer to the start of list
 */

void free_listint(listint_t *head)
{
	listint_t *killnode;

	while (head != NULL)
	{
		killnode = head;
		head = head->next;
		free(killnode);
	}
}
