#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to head of singly linked list
 *
 * Return: head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *lst = *head;
	listint_t *lst1;
	int n;

	if (head == 0 || lst == 0)
		return (0);

	lst1 = lst->next;
	n = lst->n;
	free(lst);
	*head = lst1;

	return (n);
}
