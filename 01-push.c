#include "monty.h"

/**
 * _push - pushes data to node
 * @line_nbr: line number
 * @lifo: data node
 * @int_value: number to push
 */
void _push(int line_nbr, stack_t **lifo, int int_value)
{
stack_t *new_node;/** create node to store values*/

(void)line_nbr;
new_node = malloc(sizeof(stack_t));
if (!new_node)/** if no lifo or malloc then exit*/
{
fprintf(stderr, "Error: malloc failed\n");
exit(EXIT_FAILURE);
}
new_node->n = int_value;/**store data in node*/
if (*lifo)
{
(*lifo)->prev = new_node;
new_node->next = *lifo;
new_node->prev = NULL;
}
*lifo = new_node;
}
