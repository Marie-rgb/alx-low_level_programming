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
	listint_t *nnode = malloc(sizeof(listint_t));

	if(nnode == 0)
		return (0);


	nnode ->n = n;
	nnode -> next = *head;
	*head = nnode;

	return(nnode);

}

