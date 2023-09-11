#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10.
 *
 * Return: 0 (Success)
*/
int main(void)
{

for(int num = 0; num < 10; num++){
    putchar('0' + num);

    if (num < 9){
        putchar(',');
        putchar(' ');
    }
}
putchar('\n');
return (0);
}
