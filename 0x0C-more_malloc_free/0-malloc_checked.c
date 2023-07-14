#include <stdlib.h>
#include "main.h"
/**
* malloc_checked - allocates memory using malloc
* @b: is the number of bytes to allocate
*
* Return: a pointer to the allocated memory.
* if malloc fails, status value is equal to 98.
*/
void *malloc_checked(unsigned int b)
{
char *e;

e = malloc(b);
if (e == NULL)
exit(98);
return (e);



