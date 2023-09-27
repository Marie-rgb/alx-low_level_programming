#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to head of singly linked list
 * @idx: index of the list where the new node should be added, starts at 0
 * @n: value that the node will have
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int len = listint_len(*head), count = 0;
	listint_t *marie, *lst1, *lst2;

	if (head == 0 && idx > 0)
		return (0);

	marie = malloc(sizeof(listint_t));
	if (marie == 0)
		return (0);

	if (head == 0 && idx == 0)
	{
		marie->n = n, marie->next = 0, *head = marie;
		return (marie);
	}

	if (idx > len)
	{
		free(marie);
		return (0);
	}
	lst1 = *head;
	marie->n = n;
	while (count < idx && idx != 0)
	{
		lst2 = lst1, lst1 = lst1->next;
		count++;
	}
	if (idx == 0)
	{
		*head = marie;
		marie->next = lst1;
	}
	else
	{
		lst2->next = marie;
		marie->next = lst1;
	}
	return (marie);
}
