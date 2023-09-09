#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -  prints all the numbers of base 16 in lowercase,
 * followed by a new line
 *
 * Return: 0 (Success)
*/
int main(void)
{
int num = '0';
char lowercase = 'a';
while (num <= '9')
{
putchar(num);
num++;
}
while (lowercase <= 'f')
{
putchar(lowercase);
lowercase++;
}
putchar('\n');
return (0);
}
