#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * listint_t - adds new node at the end of the node
 *
 * @head: pointer to head of a singly linked list
 * @n: number to add to the end of the list
 *
 * return :the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmph;
	listint_t *marie = malloc(sizeof(listint_t));

	if (marie == 0)
		return (0);

	tmph = *head;

	marie->n = n;
	marie->next = 0;

	if (tmph == 0)
	{
		*head = marie;
	}
	else
	{
		while (tmph->next != 0)
			tmph = tmph->next;
		tmph->next = marie;
	}

	return (marie);
}
