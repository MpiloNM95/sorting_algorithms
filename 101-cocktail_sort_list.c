#include "sort.h"
/**
 * dll_adj_swap - swaps two adjacent nodes of a doubly linked list
 * @list: doubly linked list of integers to be sorted
 * @left: node closer to head, right->prev
 * @right: node closer to tail, left->next
 */
void dll_adj_swap(listint_t **list, listint_t *left, listint_t *right)
{
	listint_t *swap;

	if (left->prev)
		left->prev->next = right;
	else
		*list = right;
	if (right->next)
		right->next->prev = left;
	right->prev = left->prev;
	left->prev = right;
	swap = right;
	left->next = right->next;
	swap->next = left;

	print_list(*list);
}
