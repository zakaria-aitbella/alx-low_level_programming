#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *  print_last_digit - prints the last digit of a number.
 * @n : The character to check
 * @lastDigit the output integer
 * Return:the value of the lastDigit
*/
int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
	{
		lastDigit = -1 * (n % 10);
	}
else
{
lastDigit = n % 10;
}
_putchar(lastDigit + '0');
return (lastDigit);
}
