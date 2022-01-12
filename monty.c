#include "main.h"


/**
 * main - program to use Monty
 * @argc: Argument count
 * @argv: Value of args
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
FILE *file;

if (argc == 0 || argc > 1) /** check if no or more than 1 arg*/
{
fprintf(stderr, "USAGE: monty file \n");
exit (EXIT_FAILURE);
}
file = fopen(argv[1], "rw");
if (!file) /** check if file opened correctly*/
{
fprintf(stderr, "Error: Can't open file <file>\n");
exit (EXIT_FAILURE);
}
Algo que lea y guarde lo que mete el usuario
executer();











if (argv[0] != push || argv[0] != pall || argv[0] != pint) /** if instruction not valid*/
{
printf("L<line_number>: unknown instruction <opcode>", nro linea, instrucción);
extit (EXIT_FAILURE);
}
else if (argv[0] != pop || argv[0] != swap || argv[0] != add)
{
printf("L<line_number>: unknown instruction <opcode>", nro linea, instrucción);
extit (EXIT_FAILURE);
}
else if (argv[0] != nop)
{
printf("L<line_number>: unknown instruction <opcode>", nro linea, instrucción);
extit (EXIT_FAILURE);
}

4. Si no se puede hacer más malloc, imprimir error y EXIT_FAILURE
}