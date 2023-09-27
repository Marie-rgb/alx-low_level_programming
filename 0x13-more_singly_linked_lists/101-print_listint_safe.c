#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_listint_safe - prints a singly linked list (can print lists with loop)
 * @head: head pointer of singly linked list
 *
 * Return: Number of elements in list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *lst, *lst2;
	unsigned int count = 0;

	lst = head;
	if (lst == 0)
		return (0);

	while (lst != 0)
	{
		lst2 = lst;
		lst = lst->next;

		count++;

		printf("[%p] %d\n", (void *)lst2, lst2->n);

		if (lst2 <= lst)
		{
			printf("-> [%p] %d\n", (void *)lst, lst->n);
			break;
		}
	}

	return (count);
}
