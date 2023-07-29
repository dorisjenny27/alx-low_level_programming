#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* _strlen - The function that returns the length of a string.
* @s : This is a character
* Return: The return value is i
*/
int _strlen(const char *s)
{
   int r = 0;


   while (s[r] != '\0')
   {
       r++;
   }
   return (r);
}


/**
* add_node - This adds a new node at beginning of a list_t list.
* @head: This is the head of a list_t list.
* @str: The value to insert into element.
* Return: This is the number of nodes.
*/
list_t *add_node(list_t **head, const char *str)
{
   list_t *addition;


   addition = malloc(sizeof(list_t));
   if (addition == NULL)
       return (NULL);
   addition->str = strdup(str);


   addition->len = _strlen(str);
   addition->next = *head;
   *head = addition;


   return (addition);
}
