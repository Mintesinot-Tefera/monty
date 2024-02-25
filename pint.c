#include "monty.h"
/**
 * m_pint - prints the top
 * @hd: stack head
 * @ctr: line_number
 * Return: no return
*/
void f_pint(stack_t **hd, unsigned int ctr)
{
	if (*hd == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", ctr);
		fclose(bus.file);
		free(bus.content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*hd)->n);
}
