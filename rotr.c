#include "monty.h"
/**
  *m_rotr- rotates the stack to the bottom
  *@hd: stack head
  *@ctr: line_number
  *Return: no return
 */
void m_rotr(stack_t **hd, __attribute__((unused)) unsigned int ctr)
{
	stack_t *copy;

	copy = *hd;
	if (*hd == NULL || (*hd)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *hd;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*hd)->prev = copy;
	(*hd) = copy;
}
