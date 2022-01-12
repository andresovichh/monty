#include "main.h"

/**
 * @brief 
 * 
 */
void _push(int line_nbr, stack_t **lifo, int int_value)
{
stack_t *new_node;/** create node to store values*/

new_node = malloc(sizeof(stack_t));
if (!lifo || !new_node)/** if no lifo or malloc then exit*/
{
printf("Error: malloc failed\n");
exit (EXIT_FAILURE);
}
new_node->n = int_value;/**store data in node*/

(*lifo)->prev = new_node;
new_node->next = *lifo;
new_node->prev = NULL;

*lifo = new_node;
}