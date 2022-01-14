#include "monty.h"

/**
 * free_dlistint - frees a dll
 * @head: ptr to head
 */
void free_dlistint(stack_t *lifo)
{
if (lifo)
{
stack_t *tmp = lifo;

while (tmp != NULL)
{
tmp = lifo->next;
free(lifo);
lifo = tmp;
}
}
}