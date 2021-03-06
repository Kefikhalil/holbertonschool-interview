#include "lists.h"

/**
 * check_cycle - checks if a list has a cycle
 * @list: pointer to head 
 *
 * Return: 1 if there is a cycle, 0 otherwise
 */
 
 int check_cycle(listint_t *list) 
 {
     listint_t *slow = list, *fast = list;

     if (list == NULL)
         return (0);
     while (slow && fast && fast->next)
     {
         fast = fast->next->next;
         slow = slow->next;
         if (slow == fast)
            return (1);
     }
 return (0);
 }
