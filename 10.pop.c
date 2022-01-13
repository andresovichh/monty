#include "monty.h"

/**
 * @pop - removes top element of stack
 * @lifo: data node
 * @line_number: line number
 */
void pop(stack_t **lifo, unsigned int line_number)
{
stack_t *tmp;

tmp = *lifo;
if (*lifo == NULL)
fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);

tmp = tmp->next;
free(*lifo);
*lifo = tmp;
}