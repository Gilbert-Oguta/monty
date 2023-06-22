#include "monty.h"
/**
 * f_pstr - prints the string starting at the top of the stack,
 * followed by a new
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *y;
	(void)counter;

	y = *head;
	while (y)
	{
		if (y->n > 127 || y->n <= 0)
		{
			break;
		}
		printf("%c", y->n);
		h = h->next;
	}
	printf("\n");
}
