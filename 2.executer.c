#include "main.h"

/**
 *  _executer - executer foo
 * 
 */
void _executer(FILE *file)
{
int int_value = 0;
unsigned int line_nbr = 0;
stack_t *lifo = NULL;
char *new_line = NULL, *token = NULL, *push_data = NULL, *comment = NULL;
size_t size = 0;

fprintf(stdout, "llego acá 2\n");
comment = "#";
while (getline(&new_line, &size, file) != -1)
{
line_nbr++;/** because line starts at nbr 1*/
token = strtok(new_line, "\t\n ");/** tokenize the 1st of line*/
if (token == NULL)
continue;
if (strchr(token, *comment) != NULL)
continue;/** if no token or comment found, restart*/
printf("llego al 3\n");
if (strcmp(token, "push") == 0)/**first word IS "push"*/
{
printf("llego a ver si escribiste push\n");
push_data = strtok(NULL, "\t\n ");
printf("push data = %s\n", push_data);
int_value =_nbr_checker(push_data, line_nbr);/**if success, returns int nbr*/
printf("push data = %d\n", int_value);
_push(line_nbr, &lifo, int_value);
}
else /** first word is not "push"*/
{
printf("llegué a foo_selector\n");
foo_selector(token, line_nbr, &lifo);
}
}
}


