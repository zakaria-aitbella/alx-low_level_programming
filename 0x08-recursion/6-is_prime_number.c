#include "main.h"
/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0.
 * @n: int
 * Return: int
*/
int is_prime_number(int n)
{

if (n / n == 1)
{
return (1);
}
else if (n / n < 1)
{
return (0);
}
else if (n <= 1)
{
	return (0);
}
}
