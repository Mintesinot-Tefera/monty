#include "monty.h"
/**
 * f_push - add node to the stack
 * @hd: stack head
 * @ctr: line_number
 * Return: no return
*/
void m_push(stack_t **hd, unsigned int ctr)
{
	int n, j = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			j++;
		for (; bus.arg[j] != '\0'; j++)
		{
			if (bus.arg[j] > 57 || bus.arg[j] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", ctr);
			fclose(bus.file);
			free(bus.content);
			free_stack(*hd);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", ctr);
		fclose(bus.file);
		free(bus.content);
		free_stack(*hd);
		exit(EXIT_FAILURE); }
	n = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(hd, n);
	else
		addqueue(hd, n);
}
