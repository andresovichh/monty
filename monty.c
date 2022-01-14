#include "monty.h"
/**
 * main - program to use Monty
 * @argc: Argument count
 * @argv: Value of args
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
FILE *fp = NULL;

(void)fp;
if (argc != 2) /** check if no or more than 1 arg*/
{
fprintf(stderr, "USAGE: monty file \n");
exit(EXIT_FAILURE);
}
fp = fopen(argv[1], "r"); /** open file with read right*/
if (fp == NULL) /** check if file opened correctly*/
{
printf("Error: Can't open file %s\n", argv[1]);
exit(EXIT_FAILURE);
}
_executer(fp);
fclose(fp);
return (EXIT_SUCCESS);
}
