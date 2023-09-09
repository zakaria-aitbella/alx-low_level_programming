#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line.
 *
 * Return: 0 (Success)
*/
int main(void)
{
char lowercase = 'a';
while (lowercase <= 'z')
{
putchar(lowercase);
lowercase++;
}
putchar('\n');
return (0);
}

