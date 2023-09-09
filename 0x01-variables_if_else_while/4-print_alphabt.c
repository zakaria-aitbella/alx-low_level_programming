#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print all the letters except q and e followed by a new line.
 *
 * Return: 0 (Success)
*/
int main(void)
{
char lowercase = 'a';
while (lowercase <= 'z')
{
if (lowercase == 'e' || lowercase == 'q')
lowercase++;
putchar(lowercase);
lowercase++;
}
putchar('\n');
return (0);
}

