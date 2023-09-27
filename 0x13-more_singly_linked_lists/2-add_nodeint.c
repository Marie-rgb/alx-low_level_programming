#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a singly linked list
 * @head: pointer to head of singly linked list
 * @n: number to add as new node in the list
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node = malloc(sizeof(listint_t));

	if (n_node == 0)
		return (0);

	n_node->n = n;
	n_node->next = *head;
	*head = n_node;

	return (n_node);
}

