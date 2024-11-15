
#include "../pushswap.h"

t_node	*find_last_node(t_node *stack)
{
	if (stack == NULL)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}

static void	rotate(t_node **stack) // ... <-1 (CABEZA) <-> 2 <-> 3 <-> 4 -> (COLA) ...  
{
	t_node	*last;
	int		len;

	len = stack_len(*stack);
	if (stack == NULL || *stack == NULL || len == 1)
		return ;
	last = find_last_node(*stack); // 1 2 3 (4)
	last->next = *stack; //(1 2 3 4) -> 1 2 3 4 -> 1 2 3 4 1 
	*stack = (*stack)->next; //(1 2 3 4 1 ...) -> ( 1<-2 3 4 1)
	(*stack)->prev = NULL; // ( .. <-2 3 4 <-1 -> 2)
	last->next->prev = last; // 4 <- 1 el previo es el 4 que hasta ahora era (--) NULL
	last->next->next = NULL; //4 -> 1 -> 2(..)  tu eres el ultimo
}

void	ra(t_node **stack)
{
	if (stack == NULL || *stack == NULL)
		return ;
	rotate(stack);
	write(1, "ra\n", 3);
}

void	rb(t_node **stack)
{
	if (stack == NULL || *stack == NULL)
		return ;
	rotate(stack);
	write(1, "rb\n", 3);
}

void	rr(t_node **stack_a, t_node **stack_b)
{
	if (stack_a == NULL || *stack_a == NULL)
		return ;
	if (stack_b == NULL || *stack_b == NULL)
		return ;
	rotate(stack_a);
	rotate(stack_b);
	write(1, "rr\n", 3);
}