#include "monty.h"

/**
 * add - adds top two elements of stack
 * @lifo: data node
 * @line_number: line number
 */
void add(stack_t **lifo, unsigned int line_number)
{
stack_t *tmp;

if (*lifo == NULL || (*lifo)->next == NULL)
{
fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
exit(EXIT_FAILURE);
}

tmp = (*lifo)->next;
tmp->n += (*lifo)->n;
pop(lifo, line_number);
}
