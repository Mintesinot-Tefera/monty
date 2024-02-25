#include "monty.h"
/**
  *m_rotl- rotates the stack to the top
  *@hd: stack head
  *@ctr: line_number
  *Return: no return
 */
void m_rotl(stack_t **hd,  __attribute__((unused)) unsigned int ctr)
{
	stack_t *tmp = *hd, *aux;

	if (*hd == NULL || (*hd)->next == NULL)
	{
		return;
	}
	aux = (*hd)->next;
	aux->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *hd;
	(*hd)->next = NULL;
	(*hd)->prev = tmp;
	(*hd) = aux;
}
