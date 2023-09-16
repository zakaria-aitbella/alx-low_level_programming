#include <stdio.h>
#include <stdlib.h>

/**
 * _islower - checks if a character is lowercase
 * @c: The character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
char ch;
scanf("%c", &ch);
if (islower(ch))
{
putchar('0');
}
else
{
putchar('1');
}
return (0);
}

