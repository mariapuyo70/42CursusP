/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpuyo-ro <mpuyo-ro@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 16:38:57 by mpuyo-ro          #+#    #+#             */
/*   Updated: 2024/05/03 17:28:53 by mpuyo-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*temp;
	size_t			i;

	i = 0;
	temp = malloc (size * count);
	if (!temp)
		return (NULL);
	while (i < (count * size))
	{
		temp[i] = 0;
		i++;
	}
	return (&temp[0]);
}
