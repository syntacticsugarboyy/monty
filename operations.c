#include "monty.h"

/**
 * ope_rations - checks and implements instructions
 * @getline_val: Getline value
 * @line_number: Line number
 *
 * Return: void
 */

void ope_rations(char *line_ptr, unsigned int line_number, FILE *fp)
{
	int idx;
	char *token1 = NULL;
	size_t n = 0;
	stack_t *stack = NULL;

	instruction_t operations[] = {
		{"push", push},
		{"pall", pall},
/*		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},*/
		{NULL, NULL},
	};

	while (getline(&line_ptr, &n, fp) != -1)
        {
                line_number++;
                token1 = strtok(line_ptr, " \n\t\r");

                if (token1 != NULL)
                {
                        if (token1 != "pall")
                        {
                                token2 = strtok(NULL, " \n\t\r");
                        }

                        for (idx = 0; operations[idx].opcode != NULL; idx++)
                        {
                                if (strcmp(operations[idx].opcode, token1) == 0)
                                {
				//	printf("%s -- %u\n", operations[idx].opcode, line_number);
                                        operations[idx].f(&stack, line_number);
                                        break;
                                }
                        }
                        if (operations[idx].opcode == NULL)
                        {
                                dprintf(2, "L%u: unknown instruction %s\n", line_number, token1);
                                exit(EXIT_FAILURE);
                        }
                }
	}
	free_list(&stack);
}
