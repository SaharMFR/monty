#include "monty.h"

/**
 * f_stack - Switchs to the stack mode.
 * @head: The pointer to the head of the stack (unused).
 * @current_line: The number of the currently-executed line (unused).
 */
void f_stack(stack_t **head, unsigned int current_line)
{
	(void) head;
	(void) current_line;
	info.sq = 0;
}
