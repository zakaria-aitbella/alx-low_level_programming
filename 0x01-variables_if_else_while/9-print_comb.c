#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -  a program that prints all possible combinations
 * of single-digit numbers.
 *
 * Return: 0 (Success)
*/
int main(void)
{
int num;
for (num = 0; num < 10; num++)
{
putchar('0' + num);

if (num < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}

