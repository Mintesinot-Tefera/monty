#include "monty.h"
/**
 * m_pstr - prints the string starting at the top of the stack,
 * followed by a new
 * @hd: stack head
 * @ctr: line_number
 * Return: no return
*/
void m_pstr(stack_t **hd, unsigned int ctr)
{
	stack_t *h;
	(void)ctr;

	h = *hd;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
