#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to change
 * @to: string to changer pointer to
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
