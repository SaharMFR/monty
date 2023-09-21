#include "monty.h"

/**
 * f_pchar - Prints the char at the top of the stack.
 * @head: The pointer to the head of the stack.
 * @current_line: The currently-executed line.
 */
void f_pchar(stack_t **head, unsigned int current_line)
{
	if (*head)
	{
		if ((*head)->n <= 127 && (*head)->n >= 0)
			printf("%c\n", (*head)->n);
		else
		{
			fprintf(stderr, "L%u: can't pchar, value out of range\n", current_line);
			fclose(info.file);
			free(info.line);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", current_line);
		fclose(info.file);
		free(info.line);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
}
