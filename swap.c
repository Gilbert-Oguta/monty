#include "monty.h"

/**
* swap - swaps elements to the stack
* @stack: pointer to a variable
* @line_number: number lines in an element
* Return: void, -1
*
*/
void swap(stack_t **stack, unsigned int line_number)
{
	int tmp;

	if (count(stack) < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	tmp = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = tmp;
}
