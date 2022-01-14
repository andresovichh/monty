#include "monty.h"
/**
 *pint - print the value at the top of the stack.
 *@line_nbr: node value.
 *@lifo: pointer head of the stack_t list.
 */
void pint(stack_t **lifo, unsigned int line_nbr)
{
	int line_value = 0;

	if (*lifo == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_nbr);
		exit(EXIT_FAILURE);
	}
	line_value = (*lifo)->n;
	printf("%d\n", line_value);
}
