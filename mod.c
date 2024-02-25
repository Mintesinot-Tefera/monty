#include "monty.h"
/**
 * m_mod - computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @hd: stack head
 * @ctr: line_number
 * Return: no return
*/
void m_mod(stack_t **hd, unsigned int ctr)
{
	stack_t *h;
	int len = 0, aux;

	h = *hd;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", ctr);
		fclose(bus.file);
		free(bus.content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	h = *hd;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", ctr);
		fclose(bus.file);
		free(bus.content);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	aux = h->next->n % h->n;
	h->next->n = aux;
	*hd = h->next;
	free(h);
}
