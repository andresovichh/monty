#include "monty.h"
/**
 *swap - swaps the top two elements of the stack.
 *@lifo: pointer to the stack
 *@line_nbr: line number
 */
void swap(stack_t **lifo, unsigned int line_nbr)
{
	int tmp_1 = 0, tmp_2 = 0, len = 0;
	stack_t *lifo_arr;
	size_t i = 0;  /**coutner*/

	lifo_arr = *lifo;  /**save the elements of life to be able to travel*/

	while (lifo_arr)
	{
		lifo_arr = lifo_arr->next;
		i++;
	}

	len = i;

	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_nbr);
		exit(EXIT_FAILURE);
	}

	tmp_1 = (*lifo)->n;
	tmp_2 = (*lifo)->next->n;

	(*lifo)->n = tmp_2;
	(*lifo)->next->n = tmp_1;
}
