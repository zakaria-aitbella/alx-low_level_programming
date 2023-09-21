#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @src: char type string.
 * @dest: char type string.
 * Description: copy the string pointed to by  pointer 'srrc' to
 * Return: pointer to 'dest'
*/

char *_strcpy(char *dest, char *src)
{
int i = -1;
do {
i++,
dest[i] = src[i];
} while (src[i] != '\0');
return (dest);
}
