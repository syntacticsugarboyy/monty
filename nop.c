#include "monty.h"

/**
 * nop - Does nothing
 * @stack: Pointer to head node
 * @line_number: Line number
 *
 * Return: void
 */

void nop(stack_t **stack, unsigned int line_number)
{
	(void)(*stack);
	(void)line_number;

	return;
}
