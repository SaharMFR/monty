#include "monty.h"

/**
 * free_stack - Frees the memory of the doubly linked list.
 * @head: The head of the list (stack).
 */
void free_stack(stack_t *head)
{
	stack_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
