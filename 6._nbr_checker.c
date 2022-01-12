#include "main.h"

/**
 * @brief 
 * 
 */
int _nbr_checker(char *push_data, int _line_nbr)
{

	int i = 0, _nbr = 0;
	

	while (push_data[i])
	{
	/* if value is number or '-' continue */
	if ((push_data[i] >= 48 && push_data[i] <= 57) || push_data[i] == 45)
	{
    _nbr = atoi(push_data);
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\12", _line_nbr);
		exit(EXIT_FAILURE);
	}
	}
return (_nbr);
}