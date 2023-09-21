#include "monty.h"

/**
 * f_rotl - Rotates the stack to the top.
 * @head: The pointer to the head of the stack.
 * @current_line: The number of the currently-executed line.
 */
void f_rotl(stack_t **head, unsigned int current_line)
{
	stack_t *temp1, *temp2;

	if ((*head) && ((*head)->next))
	{
		temp1 = (*head)->next;
		temp1->prev = NULL;

		temp2 = *head;

		while (temp2->next)
			temp2 = temp2->next;

		temp2->next = *head;
		(*head)->next = NULL;
		(*head)->prev = temp2;
		*head = temp1;
	}
}
