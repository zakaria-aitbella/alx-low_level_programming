#include <stdio.h>
#include "main.h"

/**
 * _strlen - printd the length of the string.
 * @s: the string to calculate.
 * Return: the length of the string.
*/

int _strlen(char *s)
{
	int len = 0;
	
	while (*s != '\0')
	{
	len++;
	s++;
	}
return (len);
}
