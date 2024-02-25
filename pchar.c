#include "monty.h"
/**
 * m_pchar - prints the char at the top of the stack,
 * followed by a new line
 * @hd: stack head
 * @ctr: line_number
 * Return: no return
*/
void m_pchar(stack_t **hd, unsigned int ctr)
{
	stack_t *h;

	h = *hd;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", ctr);
		fclose(bus.file);
		free(bus.content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", ctr);
		fclose(bus.file);
		free(bus.content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
