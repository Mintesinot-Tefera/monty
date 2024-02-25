#include "monty.h"
/**
 * m_pall - prints the stack
 * @h: stack head
 * @c: no used
 * Return: no return
*/
void m_pall(stack_t **h, unsigned int c)
{
	stack_t *h;
	(void)c;

	h = *h;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
