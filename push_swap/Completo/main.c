//https://www.youtube.com/watch?v=OaG81sDEpVk
//https://github.com/guillermoblanca/pushswap
//https://app.gitbook.com/o/Kct85UyRpu0v0L3eJH99/s/1xXEqzjA3qZk0USxQhP8/patrones/listas-enlazadas
#include "push_swap.h"
#include "push_swap.c"

//cuenta cuantos nodos hay conectados entre si
int	stack_len(t_node *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		i++;
		stack = stack->next;
	}
	return (i);
}

int	main(int argc, char **argv)
{
    t_node *a;
    t_node *b;

    a = NULL;
    b = NULL;

    //comprobamos sin argumentos o argumento vacio
    if (argc == 1|| (argc == 2 && !argv[1][0])
        return (EXIT_SUCCESS); //no imprimimos nada en caso de error
    else if (argc == 2)
        argv = ft_split(argv[1], ' '); //si tengo un argumento valido "Miprograma" , "1 2 3 4 5 6 7" argv ahora son los argumentos separados por espacios
    
    stack_init(&a, argv + 1, argc == 2); //inicializo los nodos
    if (!stack_sorted(a))
    {
        if (stack_len(a) == 2)
            sa(&a);
        else if (stack_len(a) == 3)
            tiny_sort(&a);
        // else 
        //     push_swap(&a, &b);
    }

    return (EXIT_SUCCESS);
}

