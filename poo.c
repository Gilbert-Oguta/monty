#include "monty.h"
/**
*pop - removes element in a stack
*@line_number: lines of element
*@stack: pointer to the head
*
*
*/
void pop(stack_t **stack, unsigned int line_number)
{
stack_t *to_the_end;
if (stack == NULL)
{
printf("L%u: can't pop an empty stack\n", line_number);
exit(EXIT_FAILURE);
}
else if (*stack == NULL)
{
printf("L%u: can't pop an empty stack\n", line_number);
exit(EXIT_FAILURE);
}
else
{
to_the_end = *stack;
*stack = (*stack)->next;
free(to_the_end);
}
return;
}
