
bdbaraban
/
holbertonschool-higher_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
Beta Try the new code view
holbertonschool-higher_level_programming/0x00-python-hello_world/lists.h
@234761
234761 Completed task 10
 1 contributor
25 lines (21 sloc)  493 Bytes
#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);

#endif /* LISTS_H */
