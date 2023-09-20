#include <stdio.h>
#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: the inter to swap.
 * @b: the inter to swap.
*/
void swap_int(int *a, int *b)
{
	if (*a != NULL && *b != NULL)
	{
		int temp = *a;
		*a = *b;
	*b = temp;
	}
}
