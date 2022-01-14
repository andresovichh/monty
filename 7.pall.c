#include "monty.h"

/**
 * pall - prints all
 * @lifo: data node
 * @line_number: line number
 */

void pall(stack_t **lifo, unsigned int line_number)
{
stack_t *tmp = *lifo;
(void)line_number;

while (tmp)
{
printf("%d\n", tmp->n);
tmp = tmp->next;
}
}
