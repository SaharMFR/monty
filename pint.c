#include "monty.h"

/**
 * f_pint - Prints the value at the top of the stack.
 * @head: The pointer to the head of the stack.
 * @current_line: The currently-executed line.
 */
void f_pint(stack_t **head, unsigned int current_line)
{
	if (*head)
		printf("%d\n", (*head)->n);
	else
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", current_line);
		fclose(info.file);
		free(info.line);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
}
