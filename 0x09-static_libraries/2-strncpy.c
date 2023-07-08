#include "main.h"
/**
* _strncpy - it copies a string
* @dest: the destination.
* @src: the source.
* @n: the amount of bytes from src.
* Return: the pointer to dest.
*/

char *_strncpy(char *dest, char *src, int n)
{
int est;

for (est = 0; est < n && src[est] != '\0'; est++)
dest[est] = src[est];
for ( ; est < n; est++)
dest[est] = '\0';

return (dest);
}
