#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* _strlen - This finds the length of a string
* @str: This is the string to find the length of
* Return: length of string
*/
unsigned int _strlen(char *str)
{
   unsigned int a;


   for (a = 0; str[a]; a++)
       ;
   return (a);
}

/**
* add_node_end - This adds a new node to the end of linked list
* @head: This is the double pointer to a linked list
* @str: This is the string to add to the new node
* Return: This is the pointer to the new node
*/
list_t *add_node_end(list_t **head, const char *str)
{
   list_t *new, *tmp;


   if (str == NULL)
       return (NULL);
   new = malloc(sizeof(list_t));
   if (new == NULL)
       return (NULL);
   new->str = strdup(str);
   if (new->str == NULL)
   {
       free(new);
       return (NULL);
   }
   new->len = _strlen(new->str);
   new->next = NULL;
   if (*head == NULL)
   {
       *head = new;
       return (new);
   }
   tmp = *head;
   while (tmp->next)
       tmp = tmp->next;
   tmp->next = new;
   return (new);
}

