#include "monty.h"

/**
 * f_mod - Computes the rest of the division of the second top
 *	element of the stack by the top element of the stack.
 * @head: The pointer to the head of the stack.
 * @current_line: The number of the currently-executed line.
 */
void f_mod(stack_t **head, unsigned int current_line)
{
	if ((*head) && ((*head)->next))
	{
		if ((*head)->n)
		{
			((*head)->next)->n %= (*head)->n;
			f_pop(head, current_line);
		}
		else
		{
			fprintf(stderr, "L%u: division by zero\n", current_line);
			fclose(info.file);
			free(info.line);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", current_line);
		fclose(info.file);
		free(info.line);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
}
