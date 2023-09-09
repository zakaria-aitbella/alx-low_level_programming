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
char uppercase = 'A';
while (lowercase <= 'z')
{
putchar(lowercase);
lowercase++;
}
putchar('\n');

while (uppercase <= 'Z'){
    putchar(uppercase);
    uppercase++;
}
putchar('\n');
return (0);
}
