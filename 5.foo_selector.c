#include "main.h"


/**
 * @brief 
 * 
 */
void foo_selector(char *token, unsigned int line_nbr, stack_t **lifo)
{

{
stack_t **stack = NULL;
int i = 0, list_len = 0;

instruction_t opcode_list[] = {
    {"pall", pall},
};
/** Get length of instruction list*/
list_len = sizeof(opcode_list) / sizeof (instruction_t);
printf("llego a medir el struct\n");
for (i = 0; i < list_len; i++)/**walk through instruction list*/
{
if (strcmp(token, opcode_list[i].opcode) == 0)/**if match, call corresponding fo*/
{
printf("entro a buscar la foo\n");
opcode_list[i].f(lifo, line_nbr);
printf("Salgo de buscar la foo\n");
//exit (EXIT_SUCCESS);

}
else
{
/**if no match, then print error*/
fprintf(stderr,"L%i: unknown instruction %s\n", line_nbr, token);
exit (EXIT_FAILURE);
}
}
}
}