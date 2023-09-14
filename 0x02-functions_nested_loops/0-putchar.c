#include "main.h"

/**
 * main - Entry point.
 *
 * Description: Prints _putchar, followed by a new line.
 *
 * Return: Always 0 (success).
 */
int main(void) /* return 0 */
{
char str[] = "_putchar";
int ch;
for (ch = 0; ch < 8; ch++)
putchar(str[ch]);
_putchar('\n'); /* Newline character */
return (0);
}
