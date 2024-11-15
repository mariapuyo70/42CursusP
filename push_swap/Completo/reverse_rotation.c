

static void	reverse_rotate(t_node **stack)
{
	t_node	*last;
	int		len;

	len = stack_len(*stack); //Yo creo que esto lo puedes ahorrar si compruebas si existe el next->next
	if (*stack == NULL || stack == NULL || len == 1)// Y entonces te saldrías si no existe
		return ;
	last = find_last_node(*stack);
	last->prev->next = NULL;
	last->next = *stack;
	last->prev = NULL;
	*stack = last;
	last->next->prev = last;
}

void	rra(t_node **stack)
{
	if (stack == NULL || *stack == NULL)
		return ;
	reverse_rotate(stack);
	write(1, "rra\n", 4);
}

void	rrb(t_node **stack)
{
	if (stack == NULL || *stack == NULL)
		return ;
	reverse_rotate(stack);
	write(1, "rrb\n", 4);
}

void	rrr(t_node **stack_a, t_node **stack_b)
{
	if (stack_a == NULL || *stack_a == NULL)
		return ;
	if (stack_b == NULL || *stack_b == NULL)
		return ;
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	write(1, "rrr\n", 4);
}