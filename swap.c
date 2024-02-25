#include "monty.h"
/**
 * m_swap - adds the top two elements of the stack.
 * @hd: stack head
 * @ctr: line_number
 * Return: no return
*/
void m_swap(stack_t **hd, unsigned int ctr)
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
		fprintf(stderr, "L%d: can't swap, stack too short\n", ctr);
		fclose(bus.file);
		free(bus.content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	h = *hd;
	aux = h->n;
	h->n = h->next->n;
	h->next->n = aux;
}
