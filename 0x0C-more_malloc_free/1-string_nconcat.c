#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - concatenates two strings.
* @s1: this is the first string.
* @s2: this is the second string.
* @n: this is the amount of bytes.
*
* Return: pointer to the allocated memory.
* if malloc fails, status value is equal to 98.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *sout;
unsigned int ls1, ls2, lsout, v;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (ls1 = 0; s1[ls1] != '\0'; ls1++)
;

for (ls2 = 0; s2[ls2] != '\0'; ls2++)
;

if (n > ls2)
n = ls2;

lsout = ls1 + n;

sout = malloc(lsout + 1);

if (sout == NULL)
return (NULL);

for (v = 0; v < lsout; v++)
if (v < ls1)
sout[v] = s1[v];
else
sout[v] = s2[v - ls1];

sout[v] = '\0';

return (sout);
}

