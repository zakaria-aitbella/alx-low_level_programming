#include "main.h"

/**
 * print_array - prints n elements of an array of integers.
 *
 * @n: elements parameter input.
 * @a: string parameter input.
 *
 * Return/ Nothing.
*/

void print_array(int *a, int n)
{
for (n = 0; a[n] != '\0'; n++)
{
printf("%d", a[n]);
if (n < 4)
{
printf(" ,");
}
}
}
