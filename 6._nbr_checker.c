#include "monty.h"

/**
 * _nbr_checker - checks if number is number
 * @push_data: data to be pusher
 * @_line_nbr: line number
 * Return: Always 0
 */
int _nbr_checker(char *push_data, int _line_nbr)
{
int i = 0, _nbr = 0, test = 0;

while (push_data[i])
{
/* if value is number or '-' continue */
if ((push_data[i] >= 48 && push_data[i] <= 57) || push_data[i] == 45)
{
test = 1;
_nbr = atoi(push_data);
}
else
{
test = 2;
break;
}
i++;
}
if (test == 2)
{
fprintf(stderr, "L%d: usage: push integer\12", _line_nbr);
exit(EXIT_FAILURE);
}
return (_nbr);
}