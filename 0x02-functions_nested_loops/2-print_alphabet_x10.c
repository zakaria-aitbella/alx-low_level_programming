#include "main.h"

/**
 *  print_alphabet_x10 - Prints the alphabet in lowercase 10 times, each on a new line.
 *
 */
void print_alphabet_x10(void)
{
int ch, line;
for (line = 0; line < 10; line++) /* Loop 10 times */
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
}
