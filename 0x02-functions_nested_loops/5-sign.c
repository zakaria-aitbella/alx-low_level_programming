#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_sign - prints the sign of a number.
 * @n : The character to check
 *
 * Return: 1 and prints + if n is greater than zero or
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
*/
int print_sign(int n)
{
if (n > 0)
{
putchar('+1');
return (+1);
}
else if (n < 0)
{
putchar('-');
return (-1);
}
else
{
putchar('0');
return (0);
}
}
