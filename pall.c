#include "monty.h"
/**
 * m_pall - prints the stack
 * @hd: stack head
 * @ctr: no used
 * Return: no return
*/
void m_pall(stack_t **hd, unsigned int ctr)
{
	stack_t *h;
	(void)ctr;

	h = *hd;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
