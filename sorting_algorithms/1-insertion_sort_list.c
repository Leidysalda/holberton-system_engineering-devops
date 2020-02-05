#include "sort.h"

/**
 * bubble_sort -  function that sorts a doubly linked list.
 * @array: Array
 * @size: size array
 *
 * Return: Always 0
 */

void insertion_sort_list(listint_t **list)
{
	int n = 0;
	node *cur;
	cur = *list;

	if (cur->next == NULL) //there is only one element in list
		return;

	node *end,*tmp;
	while(cur->next != NULL)
		cur = cur->next; //reach the last node
	while(cur->prev != NULL)
	{
		end = cur;
		tmp = cur->prev;
		cur = cur->prev;
		while(tmp != NULL && tmp->data> = end->data) //comparison starts here
		{
			tmp = tmp->prev;
			n++;
		}
		if (n)
		{
			if (tmp==NULL) //currently compared node is smallest
			{
				tmp = *list;
				end->prev = NULL;
				end->next = tmp;
				end->next->prev = end;
				*list = end;
			}
			else
			{ //currently compared node should lie in between somewhere in sorted list
				tmp->prev->next = end;
				end->prev = tmp->prev;
				tmp->prev = end;
				end->next = tmp;
			}
			cur->next = NULL; //making the next pointer on node previous to currently compared node as NULL 
		}
	}
}
