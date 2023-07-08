#include "main.h"
/**
* _strcmp - this compares string values
* @s1: the input value
* @s2: the input value
*
* Return: s1[i] - s2[i]
*/
int _strcmp(char *s1, char *s2)
{
int adez;

adez = 0;
while (s1[adez] != '\0' && s2[adez] != '\0')
{
if (s1[adez] != s2[adez])
{
return (s1[adez] - s2[adez]);
}
adez++;
}
return (0);
}

