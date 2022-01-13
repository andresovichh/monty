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
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);

	tmp = (*lifo)->next;
	tmp->n += (*lifo)->n;
	pop(lifo, line_number);
}
