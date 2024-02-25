#include "monty.h"
/**
  *m_sub- sustration
  *@hd: stack head
  *@ctr: line_number
  *Return: no return
 */
void m_sub(stack_t **hd, unsigned int ctr)
{
	stack_t *aux;
	int sus, nodes;

	aux = *hd;
	for (nodes = 0; aux != NULL; nodes++)
		aux = aux->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", ctr);
		fclose(bus.file);
		free(bus.content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	aux = *hd;
	sus = aux->next->n - aux->n;
	aux->next->n = sus;
	*hd = aux->next;
	free(aux);
}
