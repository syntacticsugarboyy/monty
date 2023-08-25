#include "monty.h"

/**
 * push - Adds an element to the stack
 * @stack: Pointer to the head node
 * @line_number: Line number
 *
 * Return: void
 */

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *node = malloc(sizeof(stack_t));
	if (node == NULL)
	{
		dprintf(2, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}

	node->n = atoi(token2);
	node->prev = NULL;
	node->next = (*stack);

	if ((*stack) != NULL)
	{
		(*stack)->prev = node;
	}
	(*stack) = node;
}
