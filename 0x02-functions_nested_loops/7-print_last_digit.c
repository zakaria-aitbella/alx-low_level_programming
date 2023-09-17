#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *  print_last_digit - prints the last digit of a number.
 * @n : The character to check
 * @lastDigit the output integer
 * Return:the value of the lastDigit
*/
int print_last_digit(int lastDigit, int n)
{
	lastDigit = n % 10;
	return (lastDigit);
}
