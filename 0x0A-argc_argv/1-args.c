#include <stdio.h>
#include "main.h"

/**
* main - prints the number of arguments
* @argc: number of count arguments
* @argv: number of vector arguments
*
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])

{

(void) argv;
printf("%d\n", argc - 1);
return (0);

}

