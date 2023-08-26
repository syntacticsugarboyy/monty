#include "monty.h"

/**
 * add - adds top two elements of the stack
 * @stack: Pointer to the head node
 * @line_number: Line number
 *
 * Return: void
 */

void add(stack_t **stack, unsigned int line_number)
{
	int num = 0;
	stack_t *temp;

	temp = (*stack);

	while (temp != NULL)
	{
		temp = temp->next;
		num++;
	}

	if (num < 2)
	{
		dprintf(2, "L%u: can't add, stack too short", line_number);
		exit(EXIT_FAILURE);
	}
	return;
}
