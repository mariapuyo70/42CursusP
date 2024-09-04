/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpuyo-ro <mpuyo-ro@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 13:12:31 by mpuyo-ro          #+#    #+#             */
/*   Updated: 2024/09/04 13:12:33 by mpuyo-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long long n, char c)
{
	unsigned long long	i;

	i = 0;
	if (n >= 16)
		i += ft_puthex (n / 16, c);
	if (c == 'x')
		i += ft_putchar ("0123456789abcdef"[n % 16]);
	if (c == 'X')
		i += ft_putchar ("0123456789ABCDEF"[n % 16]);
	return (i);
}
