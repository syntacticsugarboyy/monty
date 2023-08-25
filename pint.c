#include "monty.h"

/**
 * pint - Prints a list in rev
 * @stack: POinter to head node
 * @line_number: Line number
 *
 * Return: void
 */

void pint(stack_t **stack, unsigned int line_number)
{
	if ((*stack) == NULL)
	{
		dprintf(2,"L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
