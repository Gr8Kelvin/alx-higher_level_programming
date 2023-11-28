#include "lists.h"

/**
 * insert_node - Inserts number
 * @head: pointer
 * @number: number
 * Return: NULL or pointer
 */
listint_t *insert_node(listint_t **head, int number)
{
        listint_t *node = *head, *new;

        new = malloc(sizeof(listint_t));
        if (new == NULL)
                return (NULL);
        new->nxr = number;

        if (node == NULL || node->nxr >= number)
        {
                new->next = node;
                *head = new;
                return (new);
        }

        while (node && node->next && node->next->nxr < number)
                node = node->next;

        new->next = node->next;
        node->next = new;

        return (new);
}

