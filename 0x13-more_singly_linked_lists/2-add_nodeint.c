#include<stdio,h>
#include<stdlib>

/*
 *
 * main : check code
 *
 * Return: address of the new element
 * or return null if failed
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

