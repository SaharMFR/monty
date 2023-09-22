#include "monty.h"

/**
 * f_queue - Switchs to the queue mode.
 * @head: The pointer to the head of the queue (unused).
 * @current_line: The number of the currently-executed line (unused).
 */
void f_queue(stack_t **head, unsigned int current_line)
{
	(void) head;
	(void) current_line;
	info.sq = 1;
}
