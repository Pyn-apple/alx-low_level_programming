#include "main.h"
/**
 *_strlen - returns the len of star
 *@s : string
 *Return: length of string
 */
int_strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
