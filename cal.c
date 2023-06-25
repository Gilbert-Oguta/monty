#include "monty.h"
/**
* count - the length of elements in place
* @stack: pointer to the elements
* Return: unsigned int
*
*
*/
unsigned int count(stack_t **stack)
{
stack_t *current;
unsigned int l = 0;

current = *stack;
while (current)
{
current = current->next;
l++;
}
return (l);
}
