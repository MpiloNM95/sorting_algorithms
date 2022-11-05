#include "sort.h"
/**
 * swap1 - swaps nodes from left to right
 * @list: pointer to list
 * @head: pointer to head node
 * @aux: auxiliar pointer
 * Return: no return
 */
void swap1(listint_t **list, listint_t *head, listint_t *aux)
{
	if (head->prev)
		head->prev->next = aux;
	else
		*list = aux;
	if (aux->next)
		aux->next->prev = head;
	head->next = aux->next;
	aux->prev = head->prev;
	aux->next = head;
	head->prev = aux;
	print_list(*list);
}
/**
 * swap2 - swaps nodes from right to left
 * @list: pointer to list
 * @head: pointer to head node
 * @aux: auxiliar pointer
 * Return: no return
 */
void swap2(listint_t **list, listint_t *head, listint_t *aux)
{
	aux = head->prev;
	aux->next->prev = aux->prev;
	if (aux->prev)
		aux->prev->next = aux->next;
	else
		*list = aux->next;
	aux->prev = aux->next;
	aux->next = aux->next->next;
	aux->prev->next = aux;
	if (aux->next)
		aux->next->prev = aux;
	print_list(*list);
}
