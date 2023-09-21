#include "monty.h"

/**
 * f_rotr - Rotates the stack to the bottom.
 * @head: The pointer to the head of the list (stack).
 * @current_line: The number of the currently-executed line.
 */
void f_rotr(stack_t **head, unsigned int current_line)
{
	stack_t *last = *head;
	(void) current_line;

	if (last && last->next)
	{
		while (last->next)
			last = last->next;

		last->next = *head;
		last->prev->next = NULL;
		last->prev = NULL;
		(*head)->prev = last;
		*head = last;
	}
}
