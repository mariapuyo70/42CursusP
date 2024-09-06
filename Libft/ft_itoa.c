/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpuyo-ro <mpuyo-ro@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 18:51:39 by mpuyo-ro          #+#    #+#             */
/*   Updated: 2024/06/06 18:51:54 by mpuyo-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n)
{
	int			size;
	long long	nbr;

	size = 0;
	nbr = n;
	if (nbr <= 0)
	{
		nbr = -nbr;
		size++;
	}
	while (nbr > 0)
	{
		nbr = nbr / 10;
		size++;
	}
	return (size);
}

static char	*ft_newstr(int size, int n)
{
	char	*str;
	long	nbr;
	int		i;

	nbr = n;
	str = ft_calloc(size + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = size - 1;
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	if (nbr == 0)
		str[i--] = '0';
	while (nbr > 0)
	{
		str[i--] = '0' + (nbr % 10);
		nbr = nbr / 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		size;
	char	*str;

	size = ft_count(n);
	str = ft_newstr(size, n);
	return (str);
}
