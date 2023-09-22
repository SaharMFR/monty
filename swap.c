#include "monty.h"

/**
 * f_swap - Swaps the top two elements of the stack.
 * @head: The pointer to the head of the list (stack).
 * @current_line: The number of currently-executed line.
 */
void f_swap(stack_t **head, unsigned int current_line)
{
	stack_t *h;
	int temp;

	h = *head;

	if (h && h->next)
	{
		temp = h->n;
		h->n = h->next->n;
		h->next->n = temp;
	}
	else
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", current_line);
		fclose(info.file);
		free(info.line);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
}
