#include "monty.h"
/**
  *f_rotr- rotates the stack to the bottom
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *q;

	q = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (q->next)
	{
		q = q->next;
	}
	q->next = *head;
	q->prev->next = NULL;
	q->prev = NULL;
	(*head)->prev = copy;
	(*head) = q;
}
