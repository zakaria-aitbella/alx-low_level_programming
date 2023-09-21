#include "main.h"

/**
 * puts_half - prints the seconf half of the string
 *
 * @str: char array string type.
 *
 * Description: if odd number og chars, print (length - 1) / 2
*/

void puts_half(char *str)
{
	int i;
for (i = 0; str[i] != '\0'; i++)
;
i++;
for (i /= 2; str[i] != '\0'; i++)
{
	putchar(str[i]);
}
putchar('\n');
}
