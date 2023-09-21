#include "monty.h"

/**
 * f_push - Adds a new node to the doubly linked list (stack).
 * @head: The head of the stack.
 * @current_line: The currently-executed line.
 */
void f_push(stack_t **head, unsigned int current_line)
{
	int n, j = 0, flag = 0;

	if (info.arg)
	{
		if (info.arg[0] == '-')
			j++;
		for (; info.arg[j] != '\0'; j++)
		{
			if (info.arg[j] > 57 || info.arg[j] < 48)
				flag = 1;
		}
		if (flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", current_line);
			fclose(info.file);
			free(info.line);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", current_line);
		fclose(info.file);
		free(info.line);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	n = atoi(info.arg);

	if (info.sq)
		qaddnode(head, n);
	else
		saddnode(head, n);
}
