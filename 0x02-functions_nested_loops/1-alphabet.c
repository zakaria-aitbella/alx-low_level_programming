#include "main.h"

/**
 * main - Entry point.
 *
 * Description: prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0 (success).
 */

int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
	_putchar(ch);
putchar("\n");
}
return (0);
}
