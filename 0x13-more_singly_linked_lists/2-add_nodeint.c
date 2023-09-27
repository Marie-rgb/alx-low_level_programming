#include<stdio.h>
#include<stdlib.h>
#include "lists.h"

/**
 * listint_t - adds nodes to the beginning of a list
 *
 * @h: pointer of head of singly linked list
 * @n: number to add to the list
 *
 * Return: the address of the new element, or NULL if it failed
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node = malloc(sizeof(listint_t));

	if(n_node == 0)
		return (0);


	n_node->n = n;
	n_node->next = *head;
	*head = n_node;

	return(n_node);
}

