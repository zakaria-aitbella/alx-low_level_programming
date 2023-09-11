#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line.
 *
 * Return: 0 (Success)
*/
int main(void)
{
char lowercase = 'z';
while (lowercase >= 'a')
{
putchar(lowercase);
lowercase--;
}
putchar('\n');
return (0);
}

