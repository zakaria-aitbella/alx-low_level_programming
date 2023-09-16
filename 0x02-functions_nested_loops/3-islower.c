#include <stdio.h>
#include <stdlib.h>

int _islower(int c)
{
char ch;
scanf("%c", &ch);
if (islower(ch))
{
putchar('0');
} else{
putchar('1');
}
return 0;
}

