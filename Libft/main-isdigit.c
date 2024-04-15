/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main-isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpuyo-ro <mpuyo-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:26:20 by mpuyo-ro          #+#    #+#             */
/*   Updated: 2024/04/15 16:49:49 by mpuyo-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_isdigit(int c);

int	main(void)
{
	printf("Testing ft_isdigit with ASCII characters:\n");
	printf("Is '1' a digit? %d\n", ft_isdigit ('1')); // Debería devolver 1
	printf("Is '8' a digit? %d\n", ft_isdigit ('8')); // Debería devolver 1
	printf("Is 'a' a digit? %d\n", ft_isdigit ('a')); // Debería devolver 0
	printf("Is ',' a digit? %d\n", ft_isdigit (',')); // Debería devolver 0
	return (0);
}
