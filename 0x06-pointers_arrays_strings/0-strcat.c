#include "main.h"

/**
 * *_strcat - function to concatenate strings
 * @dest: pointer to a char
 * @src: pointer to a char
 * Return: the value of dest
*/

char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;

while (dest[i] != '\0')
{
i++;
}

while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}

dest[i] = '\0';
return dest;
}
