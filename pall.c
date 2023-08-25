#include "monty.h"

/**
 * pall - Prints the contents of a stack/queue
 * @stack: Pointer to the head node
 * @line_number: line number
 * Return: idk yet
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	temp = (*stack);

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
