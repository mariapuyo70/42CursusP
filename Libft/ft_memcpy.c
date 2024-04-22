/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpuyo-ro <mpuyo-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 19:11:20 by mpuyo-ro          #+#    #+#             */
/*   Updated: 2024/04/16 19:11:49 by mpuyo-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char *d;

	i = 0;
	d = (char *)dst;
	if (dst == NULL && src == NULL)
		return (dst);
	while (i < n)
	{
		d[i] = ((const char *) src)[i];
		i++;
	}
	return (dst);
}
