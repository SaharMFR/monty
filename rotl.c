#include "monty.h"

/**
 * f_rotl - Rotates the stack to the top.
 * @head: The pointer to the head of the stack.
 * @current_line: The number of the currently-executed line.
 */
void f_rotl(stack_t **head, unsigned int current_line)
{
	qaddnode(head, (*head)->n);
	f_pop(head, current_line);
}
