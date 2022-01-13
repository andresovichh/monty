#ifndef MONTY_H
#define MONTY_H
#define _POSIX_C_SOURCE 200809L /** so getline works*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
int n;
struct stack_s *prev;
struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
char *opcode;
void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void _executer(FILE *file);
void _closer(FILE *file);
char *_strchr(char *s, char c);
int foo_selector(char *token, unsigned int line_nbr, stack_t **stack);
void push(int line_nbr, stack_t **stack, int int_value);
int _nbr_checker(char *push_data, int _line_nbr);
void pall(stack_t **lifo, unsigned int line_number);
void pint(stack_t **lifo, unsigned int line_nbr);
void swap(stack_t **lifo, unsigned int line_nbr);
void pop(stack_t **lifo, unsigned int line_number);
void add(stack_t **lifo, unsigned int line_number);
void nop(stack_t **lifo, unsigned int line_number);
#endif
