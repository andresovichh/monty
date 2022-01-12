#include "main.h"



/**
 * @brief 
 * 
 */
 void _executer(FILE *file)
{
int byte = 0, line_nbr = 0;
char *new_line = NULL, *token = NULL;
size_t size = 0;

while (byte = getline(&new_line, &size, file) != -1)
{
line_nbr++;/** because line starts at nbr 1*/
token = strtok(new_line, "\t\n ");/** tokenize the 1st of line*/
if (!token || (strchr(token, "#") != NULL))
continue;/** if no token or comment found, restart*/
foo_selector(token, line_nbr);
}

}