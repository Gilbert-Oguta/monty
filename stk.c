#include "monty.h"
/**
*pall - print stack of variable
*@line_number: line of code
*@stack: pointer to a variable
*Return: Nothing
*
*/

void pall(stack_t **stack, unsigned int __attribute__((unused)) line_number)
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
