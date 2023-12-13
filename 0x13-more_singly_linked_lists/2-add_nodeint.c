#include "lists.h"
/**
 * add_nodeint - adds a new node at the beggining of a listint_t list
 * @head: pointer to the first node in the list
 * @n: data to addd to the new node
 * Return: pointer to the new node or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
