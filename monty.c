#include "main.h"


/**
 * main - program to use Monty
 * @argc: Argument count
 * @argv: Value of args
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
FILE *file = fopen(argv[1], "rw");

if (argc == 0 || argc > 1) /** check if no or more than 1 arg*/
{
printf("USAGE: monty file \n");
exit (EXIT_FAILURE);
}
if (file == NULL) /** check if file opened correctly*/
{
printf("Error: Can't open file <file>");
exit (EXIT_FAILURE);
}
3. si usuario da instruccion invalida, devolver mensaje
if (argv[0] != push || argv[0] != pall || argv[0] != pint)
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