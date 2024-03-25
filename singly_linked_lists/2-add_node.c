#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _strlen_recursion(char *s);

/**
 * add_node - adds new node to new element
 * @head: pointer to first element in list
 * @str: string for new node
 *
 * Return: new node, or NULL if fail
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen_recursion(new->str);
	new->next = *head;
	*head = new;

	return (new);
}

/**
 * _strlen_recursion - returns length of string
 * @s: string
 * Return: lengh of string
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
