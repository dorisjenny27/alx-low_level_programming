#include "variadic_functions.h"

/**
* print_all - Prints anything based on the format.
* @format: A string of format characters.
*          'c': char
*          'i': integer
*          'f': float
*          's': char * (if the string is NULL, print "(nil)" instead)
*          any other char should be ignored
*/
void print_all(const char * const format, ...)
{
va_list args;
int i = 0;
char *str;

va_start(args, format);

while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s", str);
break;
}

if (format[i + 1] != '\0' && (format[i] == 'c' || format[i] == 'i' ||
format[i] == 'f' || format[i] == 's'))
printf(", ");

i++;
}

va_end(args);
printf("\n");
}
