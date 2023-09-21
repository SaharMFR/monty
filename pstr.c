#include "monty.h"

/**
 * f_pstr - Prints the string starting at the top of the stack.
 * @head: The pointer to the head of the stack.
 * @current_line: The number of the currently-executed line.
 */
void f_pstr(stack_t **head, unsigned int current_line)
{
	stack_t *h = *head;
	(void) current_line;

	while (h && h->n > 0 && h->n <= 127)
	{
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
