#include "monty.h"

/**
 * execute - Executes the opcode.
 * @line: The line to execute (opcode).
 * @stack: The head of the linked list (the stack).
 * @current_line: The currently-executed line.
 * @file: The pointer to the Monty file.
 */
void execute(char *line, stack_t **stack, unsigned int current_line, FILE *file)
{
	instruction_t opcodes[] = {
		{"push", f_push},
		{"pall", f_pall},
		{NULL, NULL}
	};

	unsigned int i = 0;
	char *opcode;

	opcode = strtok(line, " \t\n");

	if (opcode && opcode[0] != '#')
	{
		info.arg = strtok(NULL, " \t\n");

		while (opcode && opcodes[i].opcode)
		{
			if (strcmp(opcode, opcodes[i].opcode) == 0)
			{
				opcodes[i].f(stack, current_line);
				return;
			}
			i++;
		}
	}
	if (!opcode && !opcodes[i].opcode)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", current_line, opcode);
		fclose(file);
		free(line);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
}
