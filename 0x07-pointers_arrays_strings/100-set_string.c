#include "main.h"

/**
 * set_string - Writes a function that sets the value of a pointer to a char
 * @s: pointer to a pointer "to".
 * @to: pointer
 */
void set_string(char **s, char *to);
{
	*s = to;
}
