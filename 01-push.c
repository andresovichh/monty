#include "monty.h"

/**
 * _push - pushes data to node
 * @line_nbr: line number
 * @lifo: data node
 * @int_value: number to push
 */
void _push(unsigned int line_nbr, stack_t **lifo, int int_value)
{
	stack_t *new_node = NULL;

	(void)line_nbr;

	if (!lifo)
	{
		exit(EXIT_FAILURE);
	}
	new_node = malloc(sizeof(stack_t));
	if (!new_node)
	{
		printf("Error: malloc failed\n");
        free(new_node);
		exit(EXIT_FAILURE);
	}
	new_node->n = int_value;
	if (*lifo)
	{
		(*lifo)->prev = new_node;
		new_node->next = *lifo;
		new_node->prev = NULL;
	}
	*lifo = new_node;
    free(new_node);
}