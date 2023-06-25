#include "monty.h"


/**
* find_opcode - find opcode in a stack
* @stack: pointer to the stack
* @opcode: input to the elements
* @line_number: line
* Return: Always 1 / stderr
*
*/
int find_opcode(stack_t **stack, char *opcode, int line_number)
{
instruction_t opcodes[] = {
{"pall", pall},
{"pop", pop},
{"swap", swap},
{"pint", pint},
{NULL, NULL}
};

int i;

for (i = 0; opcodes[i].opcode; i++)
{
if (strcmp(opcode, opcodes[i].opcode) == 0)
{
(opcodes[i].f)(stack, line_number);
return (EXIT_SUCCESS);
}
}
fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
exit(EXIT_FAILURE);
}


/**
* main - Process byte codes input
* @argc: size of argv
* @argv: double point
* Return: EXIT_SUCCESS
*
*
*/

int main(__attribute__((unused)) int argc, char const *argv[])
{
FILE *mf;
char *buff = NULL, *opcode, *n;
size_t lol = 0;
int line_number = 0;
stack_t *stack = NULL, *current;

if (argc != 2)
{
fprintf(stderr, "USAGE: monty file\n");
return (EXIT_FAILURE);
}
mf = fopen(argv[1], "r");
if (mf == NULL)
{
fprintf(stderr, "Error: can't open file %s\n", argv[1]);
exit(1);
}
while ((getline(&buff, &lol, mf)) != -1)
{
line_number++;
opcode = strtok(buff, DELIMATOR);
if (opcode == NULL || opcode[0] == '#')
continue;
if (!strcmp(opcode, "nop"))
continue;
else if (!strcmp(opcode, "push"))
{
n = strtok(NULL, DELIMATOR);
push(&stack, n, line_number);
}
else
find_opcode(&stack, opcode, line_number);
}
fclose(mf);
free(buff);
while (stack != NULL)
{
current = stack;
stack = stack->next;
free(current);
}
return (0);
}

/**
* free_stack - frees stack
* @stack: pointer to the variable
*
*
*/
void free_stack(stack_t *stack)
{
stack_t *next;

while (stack != NULL)
{
next = stack->next;
free(stack);
stack = next;
}
}
