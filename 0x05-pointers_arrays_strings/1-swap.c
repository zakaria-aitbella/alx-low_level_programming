#include <stdio.h>
#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: the inter to swap.
 * @b: the inter to swap.
*/
void swap_int(int *a, int *b)
{
	int temp
	if (*a != NULL && *b != NULL)
	{
		temp = *a;
		*a = *b;
	*b = temp;
	}
}
