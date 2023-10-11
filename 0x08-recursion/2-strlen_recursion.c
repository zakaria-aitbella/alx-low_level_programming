#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: the pointer to the string.
 *
 * Return: int (length of the string).
*/
int _strlen_recursion(char *s)
{
int ntr = 0;

if (*s > '\0')
{
ntr += _strlen_recursion(s + 1) + 1;
}
return (ntr);
}
