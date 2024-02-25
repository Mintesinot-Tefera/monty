#include "monty.h"
/**
 * m_pop - prints the top
 * @hd: stack head
 * @ctr: line_number
 * Return: no return
*/
void m_pop(stack_t **hd unsigned int ctr)
{
	stack_t *h;

	if (*hd == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", ctr);
		fclose(bus.file);
		free(bus.content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	h = *hd;
	*hd = h->next;
	free(h);
}
