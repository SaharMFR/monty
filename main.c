#include "monty.h"

proginfo_t info = {NULL, NULL, NULL, 0};

/**
 * main - The interpreter main function of Monty.
 * @argc: The number of arguments.
 * @argv: The vector of arguments (Monty file).
 * Return: 0 in success.
 */
int main(int argc, char *argv[])
{
	FILE *file;
	char *line;
	unsigned int current_line = 0;
	stack_t *stack = NULL;
	ssize_t read = 1;
	size_t size = 0;

	if (argc == 2)
	{
		file = fopen(argv[1], "r");
		info.file = file;

		if (file)
		{
			while (read > 0)
			{
				line = NULL;
				read = getline(&line, &size, file);
				info.line = line;
				current_line++;

				if (read > 0)
					execute(line, &stack, current_line, file);

				free(line);
			}
			free_stack(stack);
			fclose(file);
		}
		else
		{
			fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
			exit(EXIT_FAILURE);
		}

	}
	else
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	return (0);
}
