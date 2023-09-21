#include "monty.h"

/**
 * f_pall - Prints all the values on the stack, starting from the top.
 * @head: The head of the stack.
 * @current_line: The number of the currently-interpreted line (not used).
 */
void f_pall(stack_t **head, unsigned int current_line)
{
	stack_t *h = *head;
	(void)current_line;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
