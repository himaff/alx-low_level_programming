#include "lists.h"
#include <stdio.h>
/**
*pop_listint - deletes the head node of a linked list
*@head: head of the list
*
*Return: the deleted node data
*/
int pop_listint(listint_t **head)
{
	listint_t *tp;
	int my_data;

	if (*head == NULL)
		return (0);

	tp = *head;
	*head = tp->next;
	my_data = tp->n;
	free(tp);
	return (my_data);
}
