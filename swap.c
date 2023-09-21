#include "monty.h"

/**
 * f_swap - Swaps the top two elements of the stack.
 * @head: The pointer to the head of the list (stack).
 * @current_line: The number of currently-executed line.
 */
void f_swap(stack_t **head, unsigned int current_line)
{
	stack_t *h1, *h2;
	int temp;

	h1 = *head;
	h2 = h1->next;

	if (h1 && h2)
	{
		temp = h1->n;
		h1->n = h2->n;
		h2->n = temp;
	}
	else
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", current_line);
		fclose(info.file);
		free(info.line);
		free_stack(h1);
		exit(EXIT_FAILURE);
	}
}
