/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main-ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpuyo-ro <mpuyo-ro@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 18:19:51 by mpuyo-ro          #+#    #+#             */
/*   Updated: 2024/04/25 19:53:42 by mpuyo-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	main(void *dst, const void *src, size_t n)
{
	printf("Test1 : *dst = 'Martes', *src = 'Tres', size_t = 4:%d\n", ft_memcpy('Martes', 'Tres', 4));
	return (0);		
}
