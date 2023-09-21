#include "monty.h"

/**
 * f_add - Adds the top two elements of the stack.
 * @head: The pointer to the head of the stack.
 * @current_line: The number of the currently-executed line.
 */
void f_add(stack_t **head, unsigned int current_line)
{
	if ((*head) && ((*head)->next))
	{
		((*head)->next)->n += (*head)->n;
		f_pop(head, current_line);
	}
	else
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", current_line);
		fclose(info.file);
		free(info.line);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
}
