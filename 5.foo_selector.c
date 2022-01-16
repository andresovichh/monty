#include "monty.h"


/**
 * foo_selector - Foo that selects foos from struct
 * @token: tokenized word
 * @line_nbr: line number
 * @lifo: struct of data
 * Return: Always 0
 */
int foo_selector(char *token, unsigned int line_nbr, stack_t **lifo)
{
int i = 0, list_len = 0;

instruction_t opcode_list[] = {
{"pall", pall},
{"pint", pint},
{"swap", swap},
{"pop", pop},
{"add", add},
{"nop", nop},
};
/** Get length of instruction list*/
list_len = sizeof(opcode_list) / sizeof(instruction_t);
for (i = 0; i < list_len; i++)/**walk through instruction list*/
{
if (strcmp(token, opcode_list[i].opcode) == 0)/**if match call fo*/
{
opcode_list[i].f(lifo, line_nbr);
return (0);
/**exit (EXIT_SUCCESS);*/
}
}
/**if no match, then print error*/
fprintf(stderr, "L%d: unknown instruction%s\n", line_nbr, token);
exit(EXIT_FAILURE);
}
