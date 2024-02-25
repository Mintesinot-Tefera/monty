#include "monty.h"
/**
* free_stack - frees a doubly linked list
* @hd: head of the stack
*/
void free_stack(stack_t *hd)
{
	stack_t *aux;

	aux = hd;
	while (hd)
	{
		aux = hd->next;
		free(h);
		hd = aux;
	}
}
