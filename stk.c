#include "monty.h"
/**
*stack - print number of stack
*@line_number: number of elements
*@stack: pointer to the variable
*Return: Nothing
*
*/
void stck(stack_t **stack, unsigned int __attribute__((unused)) line_number)
{
stack_t *current = *stack;

if (stack == NULL || *stack == NULL)
return;

while (current != NULL)
{
printf("%d\n", current->n);
current = current->next;
}
}