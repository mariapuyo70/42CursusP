
#include "../pushswap.h"

static t_node	*find_highest(t_node *stack)
{
	int		highest;
	t_node	*node;

	if (stack == NULL)
		return (NULL);
	highest = INT_MIN;
	while (stack)
	{
		if (stack->value > highest)
		{
			highest = stack->value;
			node = stack;
		}
		stack = stack->next;
	}
	return (node);
}

bool	stack_sorted(t_node *stack)
{
	if (stack == NULL)
		return (TRUE);
	while (stack->next)
	{
		if (stack->value > stack->next->value)
			return (FALSE);
		stack = stack->next;
	}
	return (TRUE);
}

void	tiny_sort(t_node **a)
{
	t_node	*node;

	node = find_highest(*a);
	if (*a == node)
		ra(a);
	else if ((*a)->next == node) //aqui hay algo raro que hay que revisar por si hay que invertirlo
		sa(a); //si no funciona cambiar por el rra
	if ((*a)->value > (*a)->next->value)
		rra(a); //cambiar por sa 
}

void	handle_five(t_node **a, t_node **b)
{
	while (stack_len(*a) > 3)
	{
		init_nodes(*a, *b);
		finish_rotation(a, find_smallest(*a), 'a');
		pb(a, b);
	}
}