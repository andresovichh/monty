#include "monty.h"

/**
 * pop - removes top element of stack
 * @lifo: data node
 * @line_number: line number
 */
void pop(stack_t **lifo, unsigned int line_number)
{
stack_t *tmp;

tmp = malloc(sizeof(stack_t));

tmp = *lifo;
if (*lifo == NULL)
{
fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
exit(EXIT_FAILURE);
}
tmp = tmp->next;
free(*lifo);
*lifo = tmp;
}
