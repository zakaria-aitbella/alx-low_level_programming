#include "main.h"

/**
 * rev_string - reverses a string.
 *
 * @s: pointer : string parameter input.
 *
 * Return: Nothing.
*/

void rev_string(char *s)
{
int l, i;
char temp;
/*find string length without null char*/
for (l = 0; s[l] != '\0'; l++)
;
/*swap the string by looping to the half og the string*/
for (i = 0; i < l / 2; i++)
{
temp = s[i];
s[i] = s[l - 1 - i]; /*-1 since the array start from 0*/
s[l - 1 - i] = temp;
}




}
