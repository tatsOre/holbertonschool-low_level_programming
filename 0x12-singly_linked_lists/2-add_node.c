#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: first element of the list
 * @str: string to be copied
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{

	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;


	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	*head = new;

	return (*head);
}
