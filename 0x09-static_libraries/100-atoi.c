#include "main.h"

/**
* _atoi - it converts a string to an integer.
* @s: input string.
* Return: integer.
*/
int _atoi(char *s)
{
int k, w, n, len, f, digit;

k = 0;
w = 0;
n = 0;
len = 0;
f = 0;
digit = 0;

while (s[len] != '\0')
len++;

while (k < len && f == 0)
{
if (s[k] == '-')
++w;

if (s[k] >= '0' && s[k] <= '9')
{
digit = s[k] - '0';
if (w % 2)
digit = -digit;
n = n * 10 + digit;
f = 1;
if (s[k + 1] < '0' || s[k + 1] > '9')
break;
f = 0;
}
k++;
}

if (f == 0)
return (0);

return (n);
}

