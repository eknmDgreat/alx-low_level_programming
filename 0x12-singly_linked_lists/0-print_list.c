#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - print all the elements of a list_t list.
 * @h: singly linked list.
 * Return: the number of elements in the list.
 */

size_t print_list(const list_t *h)
{
	int nunmber = 0;

	while (h != NULL)
	{
	@@ -23,8 +23,8 @@ size_t print_list(const list_t *h)
		{
		printf("[%d] %s\n", h->len, h->str);
		}
		number++;
		h = h->next;
	}
	return (number);
}
