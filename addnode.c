#include "monty.h"

/**
 * saddnode - Inserts a new node on the top of a doubly linked list (stack).
 * @head: The pointer to the head of the list.
 * @n: The value to be stored in the new node.
 */
void saddnode(stack_t **head, int n)
{
	stack_t *new_node, *first_node;

	first_node = *head;
	new_node = malloc(sizeof(stack_t));

	if (new_node)
	{
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = first_node;

		if (first_node)
			first_node->prev = new_node;

		*head = new_node;
	}
}

/**
 * qaddnode - Inserts a new node at the end of a doubly linked list (queue).
 * @head: The pointer to the head of the list.
 * @n: The value to be stored in the new node.
 */
void qaddnode(stack_t **head, int n)
{
	stack_t *new_node, *temp;

	temp = *head;
	new_node = malloc(sizeof(stack_t));

	if (new_node)
	{
		new_node->n = n;
		new_node->next = NULL;

		if (temp)
		{
			while (temp->next)
				temp = temp->next;

			temp->next = new_node;
		}
		else
		{
			*head = new_node;
		}

		new_node->prev = temp;
	}
}
