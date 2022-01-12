#include "main.h"

/**
 * executer - reads and executes monty files
 * 
 * 
 */
void executer(FILE *file)
{
size_t n = 0;
char *line_ptr = NULL; /** so no need to malloc*/
int line_nbr = 0;

while (getline(&line_ptr, &n, file) != -1)
{
/** agarrar lo q hay en line_ptr, tokenizarlo
 *  y chequea si es null
 */


}




}