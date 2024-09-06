/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpuyo-ro <mpuyo-ro@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 13:13:00 by mpuyo-ro          #+#    #+#             */
/*   Updated: 2024/09/04 13:13:02 by mpuyo-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(uintptr_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (ft_putstr("(nil)"));
	i += ft_putstr("0x");
	i += ft_puthex(n, 'x');
	return (i);
}
