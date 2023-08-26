#include "monty.h"

/**
 * swap - swaps the first two elements of the stack
 * @stack: Pointer to the head node
 * @line_number: Line number
 *
 * Return: void
 */

void swap(stack_t **stack, unsigned int line_number)
{
	int num = 0;
	stack_t *temp;

/*
	temp = malloc(sizeof(stack_t));
	if (temp == NULL)
	{
		dprintf(2,"Error: malloc failed\n");
		exit(EXIT_FAILURE);
	} 
	*/

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
