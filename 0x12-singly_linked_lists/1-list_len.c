#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
* list_len - check the code for ALX School students.
* @h: name of the list
* Return: the number of nodes.
*/
size_t list_len(const list_t *h)
{
   int adex = 0;


   while (h)
   {
       adex++;
       h = h->next;
   }
   return (adex);
}

