#include "monty.h"

/**
 * free_list - frees a linked list
 * @stack: Pointer to head node
 *
 * Return: void
 */

void free_list(stack_t **stack)
{
	stack_t *temp;

	temp = (*stack);

	while(temp != NULL)
	{
		free((*stack));
		temp = temp->next;
		(*stack) = temp;
	}
}
