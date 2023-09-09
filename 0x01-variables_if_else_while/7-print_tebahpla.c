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
int num = 'z';
while (num >= 'a')
{
putchar(num);
num--;
}
putchar('\n');
return (0);
}
