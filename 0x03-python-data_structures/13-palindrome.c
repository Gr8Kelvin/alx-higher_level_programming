#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * is_palindrome - Checks palindrome
  * @head: The head
  * Return: 0 if not a palindrome, 1 if palindrome
  */
int is_palindrome(listint_t **head)
{
    listint_t *start = NULL, *end = NULL;
    unsigned int ias = 0, lenn = 0, lenn_c = 0, lenn_l = 0;

    if (head == NULL)
        return (0);

    if (*head == NULL)
        return (1);
    
    start = *head;
    lenn = listint_len(start);
    lenn_c = lenn * 2;
    lenn_l = lenn_c - 2;
    end = *head;

    for (; ias < lenn_c; ias = ias + 2)
    {
        if (start[ias].n != end[lenn_l].n)
            return (0);

        lenn_l = lenn_l - 2;
    }

    return (1);
}

/**
  * get_nodeint - Gets a node
  * @head: The head
  * @index: The index
  * Return: The specific node of the linked list
  */
listint_t *get_nodeint(listint_t *head, unsigned int index)
{
	listint_t *curr = head;
	unsigned int iter_t = 0;

	if (head)
	{
		while (curr != NULL)
		{
			if (iter_t == index)
				return (curr);

			curr = curr->next;
			++iter_t;
		}
	}

	return (NULL);
}

/**
  * slistint_len - Counts the number of elements
  * @h: The linked list
  * Return: Number of elements
  */
size_t list_len(const listint_t *h)
{
	int leng = 0;

	while (h != NULL)
	{
		++leng;
		h = h->next;
	}

	return (leng);
}
