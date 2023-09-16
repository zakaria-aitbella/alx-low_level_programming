#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _islower - checks if a character is lowercase
 * @c: The character to check
 *
 * Return: ,1 if c is a letter, lowercase or uppercase 0 otherwise
*/
int _isalpha(int c)
{
if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
return (1);
return (0);
}
