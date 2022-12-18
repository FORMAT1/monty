#include "monty.h"
/*This file is supposed to handle the creation of thr stack(linked list)*/
/*freeing the stack and handling all other related stuff*/
/**
 * create_stack - creates a stack
 * @stack: pointer to an uninitaialized stack
 * Return: on success EXIT_SUCCESS, else malloc error
 */
int create_stack(stack_t **stack)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
		return (malloc_err());

	new->n = STACK;
	new->prev = NULL;
	new->next = NULL;

	*stack = new;

	return (EXIT_SUCCESS);
}

/**
 * free_stack - frees the stack
 *
 * @stack: pointer to the first node
 */
void free_stack(stack_t **stack)
{
	stack_t *temp = *stack;

	while (*stack)
	{
		temp = (*stack)->next;
		free(*stack);
		*stack = temp;
	}
}

