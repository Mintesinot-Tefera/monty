#include "monty.h"
/**
 * m_queue - prints the top
 * @hd: stack head
 * @ctr: line_number
 * Return: no return
*/
void m_queue(stack_t **hd, unsigned int ctr)
{
	(void)hd;
	(void)ctr;
	bus.lifi = 1;
}

/**
 * addqueue - add node to the tail stack
 * @n: new_value
 * @hd: head of the stack
 * Return: no return
*/
void addqueue(stack_t **hd, int n)
{
	stack_t *new_node, *aux;

	aux = *hd;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*hd = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}
