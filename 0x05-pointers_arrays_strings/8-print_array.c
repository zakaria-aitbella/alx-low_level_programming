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
int i = 0;
for (i = 0; i <= n; i++)
{
printf("%d", a[i]);
if (i != (n - 1))
	printf("%d, ", a[i]);
else
printf("%d", a[i]);
}
printf("\n");
}
