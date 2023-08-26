#include "monty.h"

/**
 * pop - removes the head of the stack
 * @stack: Pointer to head node
 * @line_number: Line number
 *
 * Return: void
 */

 void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if ((*stack) == NULL)
	{
		dprintf(2, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = (*stack);
	(*stack) = (*stack)->next;
	if ((*stack) != NULL)
	{
		(*stack)->prev = NULL;
	}

	free(temp);
}
