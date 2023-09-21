#include "monty.h"

/**
 * f_sub - Subtracts the top element of the stack from
 *	the second top element of the stack.
 * @head: The pointer to the head of the list (stack).
 * @current_line: The number of currently-executed line.
 */
void f_sub(stack_t **head, unsigned int current_line)
{
	if ((*head) && ((*head)->next))
	{
		((*head)->next)->n -= (*head)->n;
		f_pop(head, current_line);
	}
	else
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", current_line);
		fclose(info.file);
		free(info.line);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
}
