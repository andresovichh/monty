#include "monty.h"

/**
 * _executer - executer foo
 * @file: a file
 */
void _executer(FILE *file)
{
int int_value = 0;
unsigned int line_nbr = 0;
stack_t *lifo = NULL;
char *new_line = NULL, *token = NULL, *push_data = NULL, *comment = NULL;
size_t size = 0;

comment = "#";
while (getline(&new_line, &size, file) != -1)
{
line_nbr++;/** because line starts at nbr 1*/
token = strtok(new_line, "\t\n ");/** tokenize the 1st of line*/
if (token == NULL)
continue;
if (strchr(token, *comment) != NULL)
continue;/** if no token or comment found, restart*/
if (strcmp(token, "push") == 0)/**first word IS "push"*/
{
push_data = strtok(NULL, "\t\n ");/** to walk the getline*/
if (_nbr_checker(push_data, line_nbr) == 100)
{
int_value = atoi(push_data);
_push(line_nbr, &lifo, int_value);
}
}
else /** first word is not "push"*/
{
foo_selector(token, line_nbr, &lifo);
}
}
}
