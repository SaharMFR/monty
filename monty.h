#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct proginfo_s - The information we need about the program.
 * @arg: The command.
 * @file: The pointer to the monty file.
 * @line: The interpreted line.
 * @sq: Stack or queue.
 * Description: The information we need to know about the
 *	interpreted program.
 */
typedef struct proginfo_s
{
	char *arg;
	FILE *file;
	char *line;
	int sq;
} proginfo_t;

extern poginfo_t info;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void f_push(stack_t **head, unsigned int num);
void f_pall(stack_t **head, unsigned int num);
void execute(char *line, stack_t **head, unsigned int current_line, FILE *file);
void free_stack(stack_t *head);
void saddnode(stack_t **head, int n);
void qaddnode(stack_t **head, int n);

#endif
