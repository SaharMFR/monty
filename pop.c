#include "monty.h"

/**
 * f_pop - Removes the top element of the stack.
 * @head: The pointer to the head of the stack.
 * @current_line: The number of currently-executed line.
 */
void f_pop(stack_t **head, unsigned int current_line)
{
	stack_t *h = *head;

	if (h)
	{
		*head = h->next;
		free(h);
	}
	else
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", current_line);
		fclose(info.file);
		free(info.line);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
}
