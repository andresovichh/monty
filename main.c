#include "monty.h"
/**
 * main - program to use Monty
 * @argc: Argument count
 * @argv: Value of args
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
FILE *file = NULL;

(void)file;
if (argc != 2) /** check if no or more than 1 arg*/
{
fprintf(stderr, "USAGE: monty file \n");
exit (EXIT_FAILURE);
}
file  = fopen(argv[1], "r"); /** open file with read right*/
if (file == NULL) /** check if file opened correctly*/
{
printf("Error: Can't open file %s\n", argv[1]);
exit (EXIT_FAILURE);
}
_executer(file);
fclose(file);
return (EXIT_SUCCESS);
}
